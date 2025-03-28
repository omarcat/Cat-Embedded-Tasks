#include <stdio.h>
#include <stdlib.h>

int bubble (int arr[],int i,int j,int sort){
for (i=0; i<10-1; i++)
  {
    for (j=0 ;j<10-i-1; j++)
    {
      if (arr[j] > arr[j+1])
      {
        sort = arr[j];
        arr[j] = arr[j+1];
        arr[j+1] = sort;
      }
    }
    return arr[i];
  }
}
int main (){
 int arr[10]={2,43,5,7,9,30,12,4,14,32},i,j,sort,newarr[10];
 printf("the unsorted array is: ");
 for (i=0; i<10; i++){
     printf("%d ",arr[i]);}
 newarr[10]=bubble(arr,i,j,sort);
 printf("the sorted array is: ");
 for (i=0; i<10; i++)
     printf("%d ",newarr[i]);
}
