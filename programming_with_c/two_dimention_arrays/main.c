#include <stdio.h>
#include <stdlib.h>
#define col 3
#define row 3

int main()
{
    int arr[col][row]={0};  ///intialzation by zero

    int i,j; ///counters on the matrix

    ///scanning the data of the array
    printf("please enter the data of the matrix \n");

    for(i=0;i<row;i++){
        for(j=0;j<col;j++)
            scanf("%d",&arr[i][j]);
    }

    printf("the values of your matrix is : \n");

    printf("[");
    for(i=0;i<row;i++){
        for(j=0;j<col;j++)
            printf("%d , ",arr[i][j]);
     printf("\n");
    }
    printf("]");

    ///finding the summation of the rows of the matrix
    int sum[row]={0};

    for(i=0;i<row;i++){
        for(j=0;j<col;j++)
            sum[i]+=arr[i][j];
    }
    for(i=0;i<row;i++)
    {
        printf("the sum of the row %d is %d\n",i+1,sum[i]);
    }
    ///finding the avarage of the rows of the matrix
    int avarage[col]={0};

    for(i=0;i<row;i++){
        for(j=0;j<col;j++)
            avarage[i]+=arr[j][i];
       avarage[i]/=row;
    }
    for(i=0;i<col;i++)
    {
        printf("the avarage of the col %d is %d\n",i+1,avarage[i]);
    }

    return 0;
}
