#include<stdio.h>
int rect(int l,int b){
int area=l*b;
printf("the area of rectangle is: %d", area);
}
int sq(a){
int area=a*a;
printf("the area of square is:%d",area);
}
int main(){
int l,b,a;
printf("length and breadth of rectangle");
scanf("%d %d",&l,&b);
rect(l,b);
printf("\n side of square");
scanf("%d",&a);
sq(a);
return 0;
}
