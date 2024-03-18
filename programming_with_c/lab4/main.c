#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[10]={0};  ///intialzation by zero

    ///scanning the data
    printf("please enter the elements you want to show : ");
    int i;
    for( i=0;i<10;i++)
        scanf("%d",&arr[i]);


    printf("your array elements are \n");
    printf("[");
    for(i=0;i<10;i++)
        printf("%d,",arr[i]);
    printf("]\n");

    ///printing the sum of the array
    int sum =0;
    for(i=0;i<10;i++)
    {
        sum+=arr[i];
    }
    printf("the sum of the elements is : %d\n",sum);

    ///printing the maximum value
    int max=arr[0];
    for(i=0;i<10;i++)
    {
        if(max<arr[i])
            max=arr[i];
    }
    printf("the maximum value of the elements is : %d\n",max);


    ///printing the minimum value
    int min=arr[0];
    for(i=0;i<10;i++)
    {
        if(min>arr[i])
            min=arr[i];
    }
    printf("the minimum value of the elements is : %d\n",min);

    ///searching for a target
    printf("please enter the value you want to search: ");
    int target;
    scanf("%d",&target);
    int position=-1;
    for(i=0;i<10;i++)
    {
        if(target==arr[i])
        {
            ///target is found
            position=i+1; ///saving the poistion of the target
            break;
        }
    }
    /// printing the target (if it was found)
    if(position==-1)
        printf("the target of value : %d you entered is not found try another value \a",target);
    else
        printf("the target was sucessfully found in the position : %d \n",position);
    return 0;
}
