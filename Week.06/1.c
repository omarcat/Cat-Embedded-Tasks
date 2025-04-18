#include <stdio.h>
#include <stdlib.h>
// this code converts lowercase to uppercase in string 
int main()
{
  char arr[10] = "aBCdeFghI";
  int i;
  printf ("string with lower and upper case:%s ",arr);
  for (i=0;i<9;i++){
    if (arr[i] > 96) {
        arr[i]=arr[i] - 32;
    }
  }
  printf ("string with upper case only:%s ",arr);
}
