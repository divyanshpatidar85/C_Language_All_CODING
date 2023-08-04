#include<stdio.h>
void hi(char *c,int i){
   // int i=1;
 
   while(*c!='\0'){
    if(i<2){  
*c=*c+6;
    }
else if(i<4 && i>1){
*c=*c-4;
}
else {
*c=*c+8;
}
c++;
i++;
   }
}
void by(char *d,int i){
   // int i=1;
 
   while(*d!='\0'){
      
   if(i<2){  
*d=*d-6;
   }
else if(i<4 && i>1){
*d=*d+4;
}
else {
*d=*d-8;
}
d++;
i++;
   }
}

 int main(){
     int a=1;
char str[]="divyansh";
char go[]="jerüiv{p";
 printf("%u \n",&str[0]);
hi(str,a);
by(go,a);
puts(str);
 // printf("\n");
puts(go);
}