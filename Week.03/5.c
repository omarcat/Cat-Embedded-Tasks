#include <stdio.h>
#include <stdlib.h>
// this code is used to find febonacci series of a number entered by the user
int main()
{
    int num;
    printf("enter a number ");
    scanf("%d",&num);
    printf("fibonacci of %d is %d",num,fibonacci(num));
    return 0;
}
int fibonacci(int n){

if (n==0) return 0;
if (n==1) return 1;
return fibonacci(n-1)+fibonacci(n-2);

}

