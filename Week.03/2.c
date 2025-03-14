#include <stdio.h>
#include <stdlib.h>
// this code is used to swap the contents of two variables using memory reference in functions
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
