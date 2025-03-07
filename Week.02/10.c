#include <stdio.h>
#include <stdlib.h>

int main()
{
    int id,password,count=0;
    printf("enter your ID number ");
    scanf("%d",&id);
    while (id!=11111){
        printf("please enter correct ID number ");
        scanf("%d",&id);
    }
    printf("enter your password ");
    scanf("%d",&password);
    if (password!=2222){
        while (count<2){
            printf("You are not registered try again ");
            scanf("%d",&password);
            if (password==2222){
                printf("welcome");
                break;}
            count++;}}
    else {printf("Welcome");}
    if (count==2)
        printf("No more tries");



}
