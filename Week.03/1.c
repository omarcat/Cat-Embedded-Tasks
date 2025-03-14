#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1,num2;
    printf("enter the first number: ");
    scanf("%d",&num1);
    printf("enter the second number: ");
    scanf("%d",&num2);
    printf("the bigger number is:%d",sum(num1,num2));
}
int sum(int num1,int num2)
{
    if (num1>num2)
        return num1;
    else return num2;
}
