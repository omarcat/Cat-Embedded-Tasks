#include <stdio.h>
#include <stdlib.h>

int main()
{
  int arr[5],type,i,j,max;
  printf("enter 5 numbers ");
  for(i=0;i<5;i++){
    scanf("%d",&arr[i]);
  }
  printf("enter 0 for descending order or 1 for ascending order ");
  scanf("%d",&type);
  while (type!=1 && type!=0){
    printf ("please enter 0 or 1 ");
    scanf ("%d",&type);
  }
  if (type==1){
    for (i=0;i<5;i++){
        for (j=i+1;j<5;j++){
            if (arr[i]>arr[j]){
                max=arr[i];
                arr[i]=arr[j];
                arr[j]=max;
            }
        }
    }
    printf("the numbers in ascending order: ");
    for(i=0;i<5;i++){
    printf("%d ",arr[i]);
  }
  }
  else if (type==0){
    for (i=0;i<5;i++){
        for (j=i+1;j<5;j++){
            if (arr[i]<arr[j]){
                max=arr[i];
                arr[i]=arr[j];
                arr[j]=max;
            }
        }
    }
    printf("the numbers in descending order: ");
    for(i=0;i<5;i++){
    printf("%d ",arr[i]);
  }
}
}
