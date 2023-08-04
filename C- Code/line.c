#include<stdio.h>
 int main(){
int x1,x2,x3,y1,y2,y3;
printf("enetr frequvently x1,x2,x3,y1,y2,y3");
scanf("%d %d %d %d %d %d",&x1,&x2,&x3,&y1,&y2,&y3);
// printf("%d %d %d %d",x1,x2,y1,y2);
if((y2-y1)/(x2-x1)==(y3-y2)/(x3-x2)==(y3-y1)/(x3-x1)){
    printf("all point lies on same line");
}else{
     printf(" lies on different line");
}
return 0;
}