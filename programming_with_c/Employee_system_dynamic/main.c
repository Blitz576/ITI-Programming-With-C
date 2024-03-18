#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <Windows.h>
#define null -32
#define Cleaan system("cls")
#define option 4

struct emp {

 int id;
 char name[40];
 int age;
 int salary;
 int over_time;
 int deduction;

};
int maximum_ids[1000]={0};
int Size;
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
int Check_Employee_Id(struct emp e1[],int pos);
void Adding_New_Employee(struct emp e[],int pos);
void Display_Employee(struct emp e3[],int size);
void Delete_Employee_By_Id(struct emp e4[],int id,int size);
void Delete_Employee_By_Name(struct emp e5[],char name[]);


int main()
{
    int flag=0;
    char menu[5][30]={"new","display","delete_by_id","delete_by_name","exit"};

    printf("please enter the maximum number of employees : \n");
    scanf("%d",&Size);
    struct emp *e=malloc(Size*sizeof(struct emp));

    ///make all by minus one
    int i=0;
    for(i=0;i<Size;i++)
    {
        e[i].id=-1;
    }
    int cursor=0;
    do{
        int i=0;
        Cleaan;
        for(i=0;i<5;i++)
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

         ///key movements
    switch(key)
    {

        case null:
            ///compound key
            key=getch();
            switch(key){
            case 72:
                (cursor)--;
                if(cursor<0)
                    cursor=4;
                break;
            case 71:
                cursor=0;
                break;
            case 79:
                cursor=4;
                break;
            case 80:
                (cursor)++;
                if(cursor>4)
                    cursor=0;
                break;
            }
            break;

        case 13:
            Cleaan;
                if(cursor==0)
                {
                    int ok=1;
                    int pos;
                    printf("please enter the new employee location you want to add :");
                    scanf("%d",&pos);
                    pos--;
                    if(Check_Employee_Id(e,pos)==0)
                        continue;
                    else {
                         Adding_New_Employee(e,pos);
                    }
                }
                else if(cursor ==1)
                {
                    Display_Employee(e,Size);
                }
                else if(cursor ==2)
                {
                    int id;
                    printf("\n please enter the id you want to search for");
                    scanf("%d",&id);
                    Delete_Employee_By_Id(e,id,Size);
                }
                else if(cursor ==3)
                {
                    char name[40];
                    printf("\n please enter the name you want to search for : ");
                    _flushall();
                    gets(name);
                    Delete_Employee_By_Name(e,name);
                }
                else if(cursor ==4)
                {
                    flag=1;
                    ///freeing to the data
                    free(e);
                }
                getch();
                break;
             case 27:
                flag=1;
                free(e);
                break;

    }

}while(flag==0);
free(e);
    return 0;
}


int Check_Employee_Id(struct emp e1[],int pos)
{
    if(pos>=Size)
    {
        printf("the position you want to enter is bigger than the table of the employees \n");

        return 0;
    }
    if(e1[pos].id!=-1)
    {
        printf("there is an employee data in that location if you want to change it please press c if not please press r : \n");
        char choice;
        choice = getch();
        if(choice == 'c')
            return 1;
        else
            return 0;
        }else{
           return 1;
    }

}

void Adding_New_Employee(struct emp e2[],int pos){

  printf("\n Adding a new employee : ");
  while(1){
  printf("\n please add The employee id :");
  scanf("%d",&e2[pos].id);
   if(maximum_ids[e2[pos].id]==1)
    printf("\n there's is an employee have the same id please try another one: ");
   else
     break;
  }
  maximum_ids[e2[pos].id]=1;

  printf("\n please add The employee name :");
  _flushall();
  gets(e2[pos].name);

  printf("\n please add The employee age :");
  scanf("%d",&e2[pos].age);

  printf("\n please add The employee salary :");
  scanf("%d",&e2[pos].salary);

  printf("\n please add The employee over time :");
  scanf("%d",&e2[pos].over_time);

  printf("\n please add The employee deduction :");
  scanf("%d",&e2[pos].deduction);

  printf("\n New Employee is added ");

}

void Display_Employee(struct emp e3[],int size){

     int i=0;
     int ok=0;
     for(i=0;i<size;i++)
     {
         if(e3[i].id!=-1){
         ok=1;
         printf("\n Employee no %d Id : %d",i+1,e3[i].id);
         printf("\n Employee no %d Name : %s",i+1,e3[i].name);
         printf("\n Employee no %d age : %d",i+1,e3[i].age);
         printf("\n Employee no %d salary : %d",i+1,e3[i].salary);
         printf("\n Employee no %d over time : %d",i+1,e3[i].over_time);
         printf("\n Employee no %d deduction : %d",i+1,e3[i].deduction);
         }
     }
     if(ok==1)
     printf("\n All Employees are shown");
     else {
        printf("\n the data is empty at the current time");
     }
}
void Delete_Employee_By_Id(struct emp e4[],int id,int size){
 int i=0;
 for(i=0;i<size;i++)
 {
     if(e4[i].id==id){
        e4[i].id=-1;
        printf("\n Employee is deleted successfully : ");
        return;
     }

 }
      printf("\n the id you entered is not found try to insert a correct id");
}
void Delete_Employee_By_Name(struct emp e5[],char selected_name[]){
 int i=0;
 for(i=0;i<Size;i++)
 {

         if(e5[i].id!=-1){
        if(strcmp(e5[i].name,selected_name) == 0)
        {
           e5[i].id=-1;
           printf("\n successfully deleted ");
           break;
        }
        }

 }
 printf("\n the name you searched for is not found please try to enter a correct name");
 return ;
}
