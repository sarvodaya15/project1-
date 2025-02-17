#include<stdio.h>
#include<string.h>
int main (){
char name1[50];
printf("enter the name");
gets(name1);
char name2[50]="hello";
puts(strcat(name2,name1));
return 0;
}
