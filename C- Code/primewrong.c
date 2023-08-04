#include<stdio.h>
 int main(){
 int a; int n; 
 int hi=0;
 printf("Enter a number \n");
 scanf("%d",&a);
for(int i=2;(i)<a;i++){
   
n = a%(i+1) ; 
if(a%(i)==0){
   // printf("this is not a prime number \n");
   hi=1;
     break; 
}

}
for(int i=1;i<a;i++){
   
n = a%(i+1) ;
if(n==1){
for(int j=3;j<a;j++){
   
int b;
b=a%j;

if(b==0){
    printf("this is not a prime number \n");
   hi=1;
      break;
   
}
      if (hi==1){
         printf("this is  a prime number \n");
           break;
    }
  
}


}
}

return 0;
 }
