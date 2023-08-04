#include<stdio.h>
int fib(int a,int b,int n){
   // printf("%d",n);
    if(n <= 0 ){
      //  break;
     return 0;
    }
    else{
    b=b+a;
    a=b-a;
    printf("    %d   ",b);
    return fib (a,b,n-1);
    }
}
 int main(){
int n;
int j=0,k=1;
scanf("%d",&n);
printf("    0    1");
fib(j,k,n);
return 0;
}