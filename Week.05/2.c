#include <stdio.h>
#include <stdlib.h>

int sumfunction(int *a, int *b);
int main() {
    int num1,num2,sum;
    printf("Enter the first number: ");
    scanf("%d",&num1);
    printf("Enter the second number: ");
    scanf("%d",&num2);
    sum = sumfunction(&num1,&num2);
    printf("The sum of the 2 numbers is: %d",sum);
}
int sumfunction(int *a,int *b) {
    return *a + *b;
}
