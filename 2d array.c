#include<stdio.h>
int main(){
int i,j;
int array[2][3];
for (i=0;i<2;i++){
   for (j=0;j<3;j++){
printf ("%d\t",array[i][j]);
   }}
for (i=0;i<2;i++){
  for (j=0;j<3;j++){
scanf ("%d\t",&array[i][j]);
}
printf ("%d\n");
int sum=0;
for(i=0;i<3;i++){
 for(j=0;j<3;j++){
   sum+=array[i][j];
 }
}
return 0;
}
