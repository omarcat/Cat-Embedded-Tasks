#include <stdio.h>
#include <stdlib.h>

struct subjects {
int programming;
int data_structures;
int discrete_math;
int algorithms;
};
int main()
{
    struct subjects arr[10];
    int id,i;
    arr[0] = {50,13,75,100};
    arr[1] ={78,34,45,90};
    arr[2] ={82,86,76,37};
    arr[3] ={32,39,83,82};
    arr[4] ={69,12,95,65};
    arr[5] ={50,43,34,42};
    arr[6] ={96,90,23,52};
    arr[7] ={43,78,29,74};
    arr[8] ={77,65,60,57};
    arr[9] ={81,42,33,83};
    printf("enter the student id ");
    scanf("%d",&id);
    while (i<100 || i>109){
        printf("wrong id please try again");
        scanf("%d",&id);
    }
    for (i=0,i<10,i++){
        if (i==(id-100)){
            printf("the programming,data structures,discrete math and algorithms marks are: %d",arr[i]\n);
            prtinf("enter the updated marks for the student");
            scanf("%d",arr[i]);
            printf("the updated mark are: %d",arr[i]);
            }
    }

}
