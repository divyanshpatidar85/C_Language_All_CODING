#include<stdio.h>
int sum(int b){
if(b==0 || b==1){
   
        return 1;
}
    else{
    return (b)*sum(b-1);
    }
}

   

 int main(){
int a;
printf("eneter a number");
scanf("%d",&a) ;
int d=sum(a);
printf(" a is  %d is sum %d",a,d);
main();
return 0;
}
