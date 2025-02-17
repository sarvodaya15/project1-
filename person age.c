#include<stdio.h>
int main(){
int age1,age2,age3;
printf("enter first person age:");
scanf("%d",&age1);
printf("enter second person age");
scanf("%d",&age2);
printf("enter the third person age");
scanf("%d",&age3);
if(age1>age2&&age1>age3){
printf("first person is the oldest");
}
else if(age2>age1&&age2>age3){
printf("second person is the oldest");
}
else{;
printf("third person is the oldest");
}

}
