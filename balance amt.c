#include<stdio.h>
int main(){
int amt;
const a=30000;
printf("enter a amt to be withdraw: ");
scanf("%d",&amt);
if(amt>a){
printf ("not available balance");
}
else{;
printf("you can withdraw");
}
return 0;
}
