#include <stdio.h>
#include <stdlib.h>


int mult(int arr1[4],int arr2[4],int ans[4]) {
    for (int i = 0; i < 4; i++) {
        ans[i] = arr1[i] * arr2[i];
    }
}
int main() {
    int arr1[4] = {1, 2, 3, 4, 5};
    int arr2[4] = {6, 7, 8, 9, 10};
    int ans[4];
    mult(arr1,arr2,ans);
    printf("Result of multiplication is : ");
    for (int i = 0; i < 4; i++) {
        printf("%d ", ans[i]);
    }
}
