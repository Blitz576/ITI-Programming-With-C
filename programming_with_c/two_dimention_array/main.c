#include <stdio.h>
#include <stdlib.h>

int main()
{
    ///input the number of rows and the number of columns
    int rows;
    int cols;

    printf("please enter the number of the rows you want :  \n");
    scanf("%d",&rows);

    printf("please enter the number of the columns you want :  \n");
    scanf("%d",&cols);
    ///declaring the 2d matrix
    int i,j; ///iterators
    int **mtrx=(int **)malloc(rows*sizeof(int *));
    for(i=0;i<rows;i++)
    {
        *(mtrx+i)=(int *)malloc(cols*sizeof(int));
    }

    ///input the data of the 2d array
    for(i=0;i<rows;i++)
    {
        for(j=0;j<cols;j++)
            scanf("%d",mtrx[i]+j);
    }

    ///output the data
    printf("the elements of your 2d array are : \n");
    for(i=0;i<rows;i++){
        for(j=0;j<cols;j++)
               printf("%d ",mtrx[i][j]);
        printf("\n");
    }
    ///freeing to the location
    for(i=0;i<rows;i++)
        free(mtrx[i]);
    free(mtrx);
    return 0;
}
