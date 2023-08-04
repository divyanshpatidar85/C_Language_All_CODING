#include<stdio.h>
 int main(){
 int a;
 printf("enter a number which you required table\n");
 scanf("%d",&a);
 for(int b=0;b<10;b++){
 printf("%d * %d = %d \n",a,b+1,a*(b+1));

 }
return 0;
}