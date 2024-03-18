/**
 * Assignment_02
 ** Reversing The Number
 */
#include <stdio.h>

int main() {
    ///Input The Number
    printf("Please Enter the number : ");
    int Number;
    scanf("%d",&Number);

    ///Find the Number of digits which would be assigned to the first element
    int temp=Number;
    int number_of_digits=1;
    while(temp>0)
    {
        temp/=10;
        number_of_digits*=10;
    }

    number_of_digits/=10;

    /// Reverse the number and assign the value to the result
    int result=0;
    while(Number>0)
    {
        if(number_of_digits==0) /// Avoid to multiply the last value by 0
            number_of_digits=1;

        result+=((Number%10)*number_of_digits);
        number_of_digits/=10;
        Number/=10;
    }

    printf("The value of the Number After reversing is : %d",result);
    return 0;
}