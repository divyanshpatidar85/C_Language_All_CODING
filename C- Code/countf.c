#include<stdio.h>
# include<math.h>
 int main(){
     int a,b,c=1,f=0;
printf("how many number of digit in number \n");
scanf("%d",&a);
printf(" enter the number \n");
scanf("%d",&b);
for(c;c<=a;c++){
    int d=pow(10,a);
  int  sum=b/d;
b = b - (sum*d);
a--;
printf(" a is %d",a);
}
printf("count %d",f);
return 0;
}