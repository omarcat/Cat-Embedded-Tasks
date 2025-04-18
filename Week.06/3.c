#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
   char arr[20];
   int i;
   printf("enter a string\n");
   gets(arr);
   printf ("the string in reverse order:");
   for (i=19;i>=0;i--)
    printf("%c",arr[i]);

}
