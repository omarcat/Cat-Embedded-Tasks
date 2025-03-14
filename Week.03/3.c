#include <stdio.h>
#include <stdlib.h>

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
