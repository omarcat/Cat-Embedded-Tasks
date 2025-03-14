#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,count=0;
    printf("enter a number ");
    scanf("%d",&n);
    printf("the febonacci series of number entered is: ");
    while (count<n)
    {
        printf("%d ",febonacci(n));
        count++;
    }

}
int febonacci(int n)
{
    if (n==0)
        return 0;
    else if (n==1)
        return 1;
    else return (febonacci(n-1)+febonacci(n-2));
}
