#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;
    printf("enter a number ");
    scanf("%d",&num);
    if (num%2 == 0)
        printf("the number you entered is even");
    else printf("the number you entered is odd");

}
