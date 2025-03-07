#include <stdio.h>
#include <stdlib.h>

int main()
{
   int num,count,factorial;
   count=0;
   factorial=1;
   printf("enter a number ");
   scanf("%d",&num);
   while (count<num){
    count++;
    factorial = factorial*count;
   }
   printf("the factorial for number entered is:%d ",factorial);
}
