#include<stdio.h>
int main(){
int m;
printf("enter marks:");
scanf("%d",&m);
if (m>90&&m<100){
printf("A grade");
}
else if (m>80&&m<89){
printf("B grade");
}
else if (m>70&&m<79){
printf("C grade");
}
else if (m>60&&m<69){
printf ("D grade");
}
else {
printf ("fail");
}
return 0;
}
