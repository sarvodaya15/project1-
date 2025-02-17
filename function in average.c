#include<stdio.h>
float avg(float a,float b,float c,float d,float e){
float sum=a+b+c+d+e;
float avg=sum/5;
return avg;
}
int main(){
 float a,b,c,d,e,sum;
 scanf("%d\n%d\n%d\n%d\n%d",&a,&b,&c,&d,&e);
printf("the average is%.2f",avg(a,b,c,d,e));
return 0;
}










