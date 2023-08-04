#include<stdio.h>
int hi(long long b){
    int c;
    if(b>=1){
    
     c= b*hi(b-1);
    }else{
     return 1;
    }
   // printf("hello %d",c);
   return c;
}
int main(){
  long long a,fact=1,d;
    printf("enter a num");
    scanf("%d",&a);
    for(int b=0 ;b<a ;b++) {
fact= fact*(b+1);

    }
    printf(" ans %lld",fact);
 d=  hi(a);
 printf(" \n %lld",d);
    return 0;
}