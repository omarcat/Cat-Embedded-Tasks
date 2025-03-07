#include <stdio.h>
#include <stdlib.h>

int main()
{
    int result;
    printf("enter the result of 3x4 ");
    scanf("%d",&result);
    if (result==12)
        printf("Thanks");
    else {
        do {
            printf("try again ");
            scanf("%d",&result);
            }while (result!=12);
            printf("Thanks");

    }
}
