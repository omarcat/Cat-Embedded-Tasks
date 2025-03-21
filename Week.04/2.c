#include <stdio.h>
#include <stdlib.h>
// this code takes 5 numbers from the user then prints the second biggest number
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
 printf("the second biggest number is: %d ",secondmax);
}
