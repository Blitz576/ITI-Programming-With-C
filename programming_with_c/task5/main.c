#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("please enter number: ");
    int number;
    int flag=0;
    scanf("%d",&number);

    if(number==0||number ==1)
    {
      printf("The number is not prime");
      return 0;
    }

    for(int i=2;i*i<number;i*=i)
    {
      if(number%i==0)
        flag=1;

    }

    if(flag==1)
     printf("The number is not prime");
    else
     printf("The number is prime");
    return 0;
}
