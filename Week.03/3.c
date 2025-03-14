#include <stdio.h>
#include <stdlib.h>
// this code is used to find the number of digits in a number entered by the user
int main()
{
    int num,count;
    printf("enter a number ");
    scanf("%d",&num);
    while (num!=0)
    {
        num=num/10;
        count++;
    }
    printf("the number of digits in the number entered is %d",count);
}
