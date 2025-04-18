#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
   char arr[10],search;
   int i,index;
   printf ("enter a string ");
   gets(arr);
   printf ("enter character to search ");
   scanf ("%c",&search);
   for (i=0;i<9;i++){
    if (arr[i]==search){
        index=i;
        break;
    }
   }
   printf ("'%c' is found at index %d",search,index);
}
