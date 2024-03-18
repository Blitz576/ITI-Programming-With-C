#include <stdio.h>
#include <stdlib.h>

struct emp{
  int data;
};
int main()
{
    struct emp e;
    printf("enter the data : ");
    scanf("%d",&(e.data));
    struct emp *e1=&e;
    printf("\n your data is : %d",e1->data);
    return 0;
}
