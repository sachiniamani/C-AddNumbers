#include <stdio.h>
 
int main()
{
    int num1, num2, sum;
    
    //Take input in two integer variables
    printf("Enter any two numbers : \n");
    scanf("%d%d", &num1, &num2);
    
    //Adding both number is simple and fundamental
    sum = num1 + num2;
    
    //Print their sum
    printf("Sum = %d",sum);
    
    return 0;
}