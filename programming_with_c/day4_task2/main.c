#include <stdio.h>
#include <stdlib.h>
#define size 2
int maximum_ids_range[1000]={0}; ///a scope of ids for users
struct emp {
  int id;
  char name[20];
  int age;
  int salary;
  int over_time;
  int deduction;
};
int main()
{

    struct emp ee[size];
    int i=0;

    printf("Employee's system \n");

    while(i<size){
    printf("Enter your id : \n");
    int tmp_id;
    scanf("%d",&tmp_id);

    if(tmp_id>=1000)
    {
        printf("invalid id please try to enter id from 1 to 1000 \n");
        continue;
    }
    if(maximum_ids_range[tmp_id]==1)
    {
        printf("this id is reserved please try to enter another id \n");
        continue;
    }

    else{
      ee[i].id=tmp_id;
      maximum_ids_range[tmp_id]=1;
    }
    printf("Enter your name : \n");
    ///scanf("%s",ee.name);
    _flushall();
    gets(ee[i].name);

    printf("Enter your age : \n");
    scanf("%d",&ee[i].age);
    printf("Enter your salary :  \n");
    scanf("%d",&ee[i].salary);
    printf("Enter your Over Time :  \n");
    scanf("%d",&ee[i].over_time);
    printf("Enter your deduction : ");
    scanf("%d",&ee[i].deduction);
    i++;
    }
    printf("\n");
    for (i=0;i<size;i++)
    {
        printf("Employee %d Name : %s \n",i+1,ee[i].name);
        printf("Employee %d id : %d \n",i+1,ee[i].id);
        printf("Employee %d age : %d \n",i+1,ee[i].age);
        printf("Employee %d salary : %d \n",i+1,ee[i].salary);
        printf("Employee %d over time : %d \n",i+1,ee[i].over_time);
        printf("Employee %d deduction : %d \n",i+1,ee[i].deduction);
        printf("Employee %d Total salary is : %d \n",i+1 ,(ee[i].salary+ee[i].over_time)-ee[i].deduction);
    }
    return 0;
}
