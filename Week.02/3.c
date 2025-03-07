#include <stdio.h>
#include <stdlib.h>

int main()
{
   int idnum;
   printf("enter your ID number ");
   scanf("%d",&idnum);
   switch(idnum)
   {
       case 1234: printf("your name is Harry");
       break;
       case 5678: printf("your name is Ron");
       break;
       case 1145: printf("your name is Hermione");
       break;
       default: printf("Wrong ID");
       break;
   }
}
