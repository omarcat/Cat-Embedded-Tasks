#include <stdio.h>
#include <stdlib.h>
// this code prints the row and column sums of a 5x5 array
int main()
{
  int a[5][5] = {{8,3,9,0,10},{3,5,17,1,1},{2,8,6,23,1},{15,7,3,2,9},{6,14,2,6,0}
  };
  int i,j,sum=0;
  printf("the row total is: ");
  for (i=0;i<5;i++){
  for(j=0;j<5;j++){
    sum+= a[i][j];
  }
  printf("%d ",sum);
  sum=0;
  }
  printf("\nthe column total is: ");
  for (j=0;j<5;j++){
    for (i=0;i<5;i++){
        sum+= a[i][j];
    }
    printf("%d ",sum);
  }
}
