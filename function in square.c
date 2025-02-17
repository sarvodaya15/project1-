#include<stdio.h>
int square(int a){
int square= a*a;
return square;
}
int main(){
int a;
scanf("%d",&a);
printf("%d is square",square(a));
return 0;
}
