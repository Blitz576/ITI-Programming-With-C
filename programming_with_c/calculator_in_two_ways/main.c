#i nclude <stdio.h>
#include <stdlib.h>

struct equations {
 int sum;
 int multiply;
 int subtractoin;
};
struct equations equations_v1(int number1,int number2);
void equations_v2(int number1,int number2,int *sum,int *multiply,int *subtraction);
int main()
{
    int number1,number2;
    printf("please enter the value of two numbers : ");
    scanf("%d%d",&number1,&number2);
   struct equations e1=equations_v1(number1,number2);
    printf(" the sum is : %d",e1.sum);
    printf("\n the multiplication is : %d",e1.multiply);
    printf("\n the subtraction is :%d ",e1.subtractoin);
    ///the second way
    int sum;
    int multiply;
    int sub;
    printf("\n the other way using pointers : ");
    equations_v2(number1,number2,&sum,&multiply,&sub);
    printf("\n the sum is : %d",sum);

    printf("\n the multiplication is : %d",multiply);
    printf("\n the subtraction is :%d ",sub);
    return 0;
}
struct equations equations_v1(int number1,int number2)
{
    struct equations ee;
    ee.sum=number1+number2;
    ee.multiply=number1*number2;
    ee.subtractoin=number1-number2;
    return ee;
};
void equations_v2(int number1,int number2,int *sum,int *multipl,int *subtraction)
{
    *sum=number1+number2;
    *multipl=number1*number2;
    *subtraction=number1-number2;
}
