// #include<stdio.h>
//  int main(){
// int a=0;
// for(a;a<=6;a++){
//  for(char b=65; b<=71-a && b>=65;b++ ){
//      printf("%c ",b);
    
//      if(b==71-a){
         
//          for(char c=71-a;c>=66;c--){
//              printf("%c ",c-1);
           
//            }  
//          }
//      }
//      printf("\n");
//  }

// return 0;
// }
#include<stdio.h>
//int logic;
 int main(){
int space=0;
int a=0;
int logic;
for(a;a<=6;a++){
    
 for(char b=65; b<=71-a && b>=65;b++ ){
     printf("%c ",b);
  logic=b;
     
 }
 printf("space first %d",space);
 if (space>0){
 for(int a=1;space>0 && space<=(1+((space-1)*2));a++){
  //  printf("hi ");
  //printf("space loop first %d",a);
 }
 }
 //printf("new is %d",new);
 for(char logic;  logic>=65;logic--){

     printf("%c ",logic);
 }
 space=a+1;

// printf("space %d",space);
 printf("\n");
}

return 0;
}