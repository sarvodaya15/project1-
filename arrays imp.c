#include<stdio.h>
int main(){
 int size;
 printf("enter the size:");
 scanf("%d",&size);
int arr[size];int i;
//sacnf("%d%d",&arr[0],&arr[1]);
//printf("%d %d",arr[0],arr[1]);
for(i=0;i<size;i++){
 scanf("%d",&arr[i]);
}
for(i=0;i<size;i++);
printf("\nthe element %d is at index %d",arr[i],i);

return 0;
}
