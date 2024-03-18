#include <stdio.h>
#include <stdlib.h>

int main()
{
    int size;
    printf("please enter the size of the array you want to intialize : ");
    scanf("%d",&size);
    int *arr=(int *)malloc(size*sizeof(int));
    int i=0;
    for(i=0;i<size;i++)
    {
        printf("please enter the value of the element no %d : ",i+1);
        scanf("%d",arr+i);
    }
    printf("\n");

    ///printing the data of the array
    printf("the elements you entered are : \n");
    for(i=0;i<size;i++)
    {
        printf("%d ",*(arr+i));
    }

    ///freeing the data
    free(arr);

    return 0;
}
