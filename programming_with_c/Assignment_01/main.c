
/**
 * Day03
 ** Assignment_01
 *** Factorial
*/

#include <stdio.h>

int main() {

    int Number;
    printf("Please enter the number : ");
    /// Input Number From User
    scanf("%d",&Number);
    ///Counting the Factorial of the number

    int i;
    int Factorial=1;
    for(i=1;i<=Number;i++)
    {
        Factorial*=i;
    }
    printf("The Factorial of the number %d is : %d",Number,Factorial);
    return 0;
}
