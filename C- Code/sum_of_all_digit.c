#include<stdio.h>
 int main(){
int a,maj,sum=0; 
printf("enter a num of 5 digit \n");
scanf("%d",&a);
sum=a/10000;
a = a - (sum*10000);
maj=a/1000;
sum = sum+maj;
a = a - (maj*1000);
//
maj=a/100;
sum = sum+maj;
a = a - (maj*100);
//
maj=a/10;
sum = sum+maj;
a = a - (maj*10);
maj=a/1;
sum = sum+maj;
a = a - (maj*1);
printf("sum of number %d",sum);
// return 0;
}