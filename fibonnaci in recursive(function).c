#include<stdio.h>
int recursivefibo(n);
int main(){
int n,t1=0,t2=1,nextterm,result;
printf("enter a number of terms");
scanf("%d\n",&n);
result=recursivefibo(n);
printf("the result is %d ",result);
return 0;
}
int recursivefibo(n){
 int i,t1=0,t2=1,nextterm;
for(int i=1;i<=0;i++){
 printf("%d",t1);
nextterm=t1+t2;
t1=t2;
t2=nextterm;
}
printf("\n");
}
