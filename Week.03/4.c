#include <stdio.h>
#include <stdlib.h>

int main()
{
    int id,password,count=0;
    printf("enter your ID ");
    scanf("%d",&id);
    while (id!=0000){
        printf("please enter correct ID number ");
        scanf("%d",&id);}
    printf("enter your password ");
    scanf("%d",&password);
    printf("%d",login(password,count));

}
int login(int password,int count)
{
     if (password!=1111){
        while (count<2){
            printf("You are not registered try again ");
            scanf("%d",&password);
            if (password==1111){
                printf("welcome");
                break;}
            count++;}}
    else {printf("Welcome");}
    if (count==2)
        printf("No more tries ");
}
