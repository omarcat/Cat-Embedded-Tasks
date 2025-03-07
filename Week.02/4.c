#include <stdio.h>
#include <stdlib.h>

int main()
{
   int grade;
   printf("enter your grade in percentage ");
   scanf("%d",&grade);
   if (grade<=100 && grade>90)
    printf("excellent");
   else if (grade<=100 && grade>90)
   printf("very good");
   else if (grade<=100 && grade>90)
   printf("good");
   else if (grade<=100 && grade>90)
   printf("average");
   else if (grade<=100 && grade>90)
   printf("bad");
   else if (grade<=100 && grade>90)
   printf("fail");
   else printf("invalid grade");

}
