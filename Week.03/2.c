#include <stdio.h>
#include <stdlib.h>

int main()
{
  int a=1,b=2;
  fun(&a,&b);
  printf("a=%d and b=%d",a,b);
}
int fun(int *ptr1,int *ptr2)
{
    *ptr1=2;
    *ptr2=1;

}
