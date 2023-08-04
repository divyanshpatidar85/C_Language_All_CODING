#include<stdio.h>
int transfer(int a){
    
int b= a/1000;

for(int i=1;i<=b;i++){
    printf("m");
}
a= a-(b*1000);


int c= a/500;
for(int i=1;i<=c;i++){
    printf("d");
}
a= a-(c*500);

int d= a/100;
for(int i=1;i<=d;i++){
    printf("c");
}
a=a-(d*100);

int e= a/50;
for(int i=1;i<=e;i++){
    printf("l");
}
a=a-(e*50);

int f= a/10;
for(int i=1;i<=f;i++){
    printf("x");
}
a=a-(f*10);

int g= a/5;
for(int i=1;i<=g;i++){
    printf("v");
}
a=a-(g*5);
//printf(" last a is %d",a);
int h= a/1;
for(int i=1;i<=h;i++){
    printf("i");
}
a=a-(h*1);
}
 int main(){
int num;
printf("Enter a number");
scanf("%d",&num);
transfer(num);
return 0;
}



