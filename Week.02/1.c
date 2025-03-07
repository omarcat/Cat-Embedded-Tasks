#include <stdio.h>
#include <stdlib.h>

int main()
{
    int hours,salary ;
    printf ("enter how many hours you work per week ");
    scanf("%d",&hours);
    if (hours<40) {
       salary = 0.9*hours*50;
       }
     else {
       salary=hours*50;
    }
    printf ("your salary is %d",salary);

}
