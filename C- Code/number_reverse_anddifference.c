#include<stdio.h>
 int main(){
int a,maj1,maj2,maj3,maj4,maj5,maj0,sum=0,d; 
printf("enter a num of 5 digit \n");
scanf("%d",&a);
d=a;
maj0=a/10000;
a = a - (maj0*10000);
sum=maj0*1;
maj1=a/1000;
 a = a - (maj1*1000);
 sum=sum+(maj1*10);
maj2=a/100;
a = a - (maj2*100);
sum=sum+(maj2*100);
maj3=a/10;
a = a - (maj3*10);
sum=sum+(maj3*1000);
maj4=a/1;
a = a - (maj4*1);

sum=sum+(maj4*10000);
printf(" reverse num %d\n",sum);
if(sum-d!=0){
   printf(" not equal\n"); 
}else {
printf("  equal\n");
}
}