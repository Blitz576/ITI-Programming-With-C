#include <stdio.h>
#include <stdlib.h>

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

    struct emp ee;
    printf("Employee's system \n");
    printf("Enter your name : \n");
    ///scanf("%s",ee.name);
    gets(ee.name);
    printf("Enter your id : \n");
    scanf("%d",&ee.id);
    printf("Enter your age : \n");
    scanf("%d",&ee.age);
    printf("Enter your salary :  \n");
    scanf("%d",&ee.salary);
    printf("Enter your Over Time :  \n");
    scanf("%d",&ee.over_time);
    printf("Enter your deduction : ");
    scanf("%d",&ee.deduction);

    printf("Employee Name : %s \n",ee.name);
    printf("Employee Name : %d \n",ee.id);
    printf("Employee Name : %d \n",ee.age);
    printf("Employee Name : %d \n",ee.salary);
    printf("Employee Name : %d \n",ee.over_time);
    printf("Employee Name : %d \n",ee.deduction);

    printf("Your Total salary is : %d" ,(ee.salary+ee.over_time)-ee.deduction);



    return 0;
}
