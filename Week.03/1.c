#include <stdio.h>
#include <stdlib.h>
// this code is used to find the maximum between 2 numbers using a function
int main()
{
    int num1,num2;
    printf("enter the first number: ");
    scanf("%d",&num1);
    printf("enter the second number: ");
    scanf("%d",&num2);
    printf("the bigger number is:%d",max(num1,num2));
}
int max(int num1,int num2)
{
    if (num1>num2)
        return num1;
    else return num2;
}
