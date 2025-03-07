#include <stdio.h>
#include <stdlib.h>

int main()
{
   int num,count,average,sum;
   count=0;
   sum=0;
   while (count<10)
   {
       printf("enter a number ");
       scanf("%d",&num);
       count++;
       sum = sum +num;
   }
   average=sum/10;
   printf("the sum of the numbers entered is %d and the average is %d",sum,average);
}
