#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[10],i,j,k,n=10;
    printf("enter 10 numbers ");
    for (i=0;i<10;i++){
        scanf("%d",&arr[i]);
    }
    for (i=0;i<n;i++){
        for (j=i+1;j<n;j++){
            if (arr[i]==arr[j]){
                for(k=j;k<n;k++){
                    arr[k]=arr[k+1];
                }
                n--;
                j--;
            }
        }
    }
    printf("the unique elements are: ");
    for(i=0;i<n;i++)
        printf("%d ",arr[i]);
}
