#include <stdio.h>
#include <stdlib.h>

struct{
int salary;
int bonus;
int deductions;
}Mohsen,Maged,Mariam;

int main()
{
   printf("enter the details for Mohsen ");
   scanf("%d %d %d",&Mohsen.salary,&Mohsen.bonus,&Mohsen.deductions);
   printf("enter the details for Maged ");
   scanf("%d %d %d",&Maged.salary,&Maged.bonus,&Maged.deductions);
   printf("enter the details for Mariam ");
   scanf("%d %d %d",&Mariam.salary,&Mariam.bonus,&Mariam.deductions);
   int mohsensum,magedsum,mariamsum;
   mohsensum = Mohsen.salary+Mohsen.bonus-Mohsen.deductions;
   magedsum = Maged.salary+Maged.bonus-Maged.deductions;
   mariamsum = Mariam.salary+Mariam.bonus-Mariam.deductions;
   printf("the total for Mohsen: %d\n",mohsensum);
   printf("the total for Maged: %d\n",magedsum);
   printf("the total for Mariam: %d",mariamsum);
}
