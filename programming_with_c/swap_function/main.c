#include <stdio.h>
#include <stdlib.h>
void Swap(int *var1,int *var2);
int main(){

    int number1,number2;
    printf("please enter the two numbers : ");
    scanf("%d",&number1);
    scanf("%d",&number2);
    Swap(&number1,&number2);
    printf("\n values of the first number after swap is : %d",number1);
    printf("\n values of the second number after swap is : %d",number2);
    return 0;
}
void Swap(int *var1,int *var2)
{
    int tmp=*var1;
    *var1=*var2;
    *var2=tmp;

}
