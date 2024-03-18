#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>

void goto_xy(int x,int y)
{
    COORD coord ={0,0};
    coord.X=x;
    coord.Y=y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);
}
int main()
{
    ///scanning the size of the magic box

    int number;
    printf("please enter the size of the magic box (should be odd) : ");

    scanf("%d",&number);
    ///checking if the size was right or not
    if(number%2==0){
        printf("wrong number please enter a right size of the magic box");
        return 0;
    }

    ///printing the first element of the magic box
    int row=1 ;int col=(number%2)+1;
    goto_xy(col*3,row);
    printf("%d",1);

    int i;///counter on the numbers
    int size =number*number;
    for(i=2;i<=size;i++)
    {

        if(((i-1)%number)!=0)
        {
            row--;
            col--;
            ///Wrap around if needed
            if(row==0) row=number;

            if (col==0) col=number;

           goto_xy(col*3,row);
           printf("%d",i);

        }else{
            row++;
            goto_xy(col*3,row);
            printf("%d",i);
        }
    }
    return 0;
}
