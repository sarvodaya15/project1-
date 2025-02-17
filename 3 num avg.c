#include<stdio.h>
int main(){
int num1,num2,num3;
printf("enter number :");
scanf("\n%d",&num1);
printf("\nenter number :");
scanf("\n%d",&num2);
printf("\nenter number :");
scanf("\n%d",&num3);
int a;
a=num1+num2+num3;
printf("the sum of the numbers is%d ",a);
float avg;
avg=num1+num2+num3/3;
printf("\nthe average of the numbers is%f",avg);
return 0;


}
