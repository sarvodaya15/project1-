#include<stdio.h>
int main(){
int a=10;
int b=20;
printf("%d",a);
int *ptr1=&a;
int *ptr2=&b;
printf("\n%d",&*ptr1);
printf("\n%d",&*ptr2);
return 0;
}
