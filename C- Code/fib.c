#include<stdio.h>
int hi(int term,int con,int c){
    
    if(term==0){
        return 1;
    }
    int b;
    if(c==0){
   b=c;
    }else{
       // con=0;
    }
   // c=c-b;
 c=c+con+b;
 b=c-con-b;
  printf(" %d \n",b);
 printf("before %d \n",b);

int l=hi(term-1,0,c);

}
 int main(){
int a,start=1,first=0;
scanf("%d",&a);
hi(a,start,first);
return 0;
}