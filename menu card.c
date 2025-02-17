#include<stdio.h>
intmain(){
int n;
printf("enter the menu card for order:1.butterscotch,2.blackforest,3.vennila,4.strawberry,5.mixed juice,6.smoodh");
scanf("%d",&n);
switch(n){
 case 1:
     printf("butterscotch");
     break;
 case 2:
     printf("blackforest");
     break;
 case 3:
     printf("vennila");
     break;
 case 4:
     printf("strawberry");
     break;
 case 5:
     printf("mixed juice");
     break;
 case 6:
    printf("smoodh");
    break;
 default :
    printf("invalid number");
}
return 0;
}
