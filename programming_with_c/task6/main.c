#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("please enter number: ");
    int number;
    int flag=0;
    scanf("%d",&number);

    if(number==0||number==1){
     printf("0");
     return 0;
     }

    for(int i=2;i<number;i++){
    flag=0;
    for(int j=2;j<i;j++)
    {
      if(i%j==0)
        flag=1;

    }
     if(flag!=1)
      printf("%d ",i);
    }
    return 0;
}
