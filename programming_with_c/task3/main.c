#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number;
    int sum=0;

    do{
      printf("please enter the number you want to take its sum : ");
      scanf("%d",&number);
      sum+=number;

    } while(sum<=100);

    printf("The Final Sum is : %d",sum);
    return 0;
}
