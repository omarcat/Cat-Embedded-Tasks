#include <stdio.h>
#include <stdlib.h>

int main()
{
 int arr[5],count,max=0,secondmax=0;
 printf("enter 5 number ");
 for ( count=0;count<5;count++){
    scanf("%d",&arr[count]);
 }
 for (count=0;count<5;count++){
    if (arr[count]>max){
        secondmax=max;
        max=arr[count];
    }
    else if (arr[count]>secondmax && arr[5]<max)
        secondmax=arr[count];
 }
 printf("the biggest number is: %d ",secondmax);
}
