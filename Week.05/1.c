#include <stdio.h>
#include <stdlib.h>

int main()
{
   int num = 10;
   printf("%d ", num);
   int *ptr = &num;
   *ptr = 20;
   printf("%d", num);
}
