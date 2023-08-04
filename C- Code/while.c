#include<stdio.h>
 int main(){
     int a, i=1;
     int sum=0;
for(i=1; i>0;i){
    printf("num");
    scanf("%d",&a);
    if(a==0){
        break;
    }else{
        sum=a+sum;
    }
}
printf("%d",sum);
return 0;
}