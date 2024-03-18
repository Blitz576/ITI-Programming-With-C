#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>
#define null -32
#define Cleaan system("cls")
#define option 4
void goto_xy(int x,int y)
{
    COORD coord ={0,0};
    coord.X=x;
    coord.Y=y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);
}
void text_attr(int i)
{
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),i);
}

struct employee{
    int id=-1;
    char name[20];
    int age;
    int salary;
    int over_time;
    int deduction;

};
void key_movement(char *key,int *flag,int *current);
void compound_key(char *key,int *cursor);

int main()
{
    int flag=0;
    char menu[4][30]={"new","display","delete_id","exit"};

    int cursor=0;
    do{
        int i=0;
        Cleaan;
        for(i=0;i<4;i++)
        {

            goto_xy(10,5+i);
            if(i==cursor)
            {
                text_attr(0x47);
            }
            printf("%s",menu[i]);
            text_attr(0x07);
        }

            char key;
            key=getch();
    switch(key)
    {
        case null:
            key=getch();
            switch(key){
            case 72:
                (cursor)--;
                if(cursor<0)
                    cursor=3;
                break;
            case 71:
                cursor=0;
                break;
            case 79:
                cursor=3;
                break;
            case 80:
                (cursor)++;
                if(cursor>3)
                    cursor=3;
                break;
            }
            break;
        case 13:
                if(cursor==3)
                {
                    flag=1;
                }else{
                    Cleaan;
                    ///printf("%s",menu[cursor]);
                    getch();
                }
                break;
             case 27:
                flag=1;
                break;

    }

}while(flag==0);
    return 0;
}














/**
switch(key)
            {
        case null:
            key=getch();
            switch(key){
            case 72:
                cursor--;
                cursor+=3*(cursor<0);
                break;
            case 71:
                cursor=0;
                break;
            case 79:
                cursor=2;
                break;
            case 80:
                cursor++;
                cursor%=3;
                break;
            }
            break;
             case 13:
                if(cursor==2)
                {
                    flag=1;
                }else{
                    system("cls");
                    printf("%s",menu[cursor]);
                    getch();
                }
                break;
             case 27:
                flag=1;
                break;

            }
**/
