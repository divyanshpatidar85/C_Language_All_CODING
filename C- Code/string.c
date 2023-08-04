#include<stdio.h>
#include<string.h>
 int main(){
//char str[5000];
//gets(str);
//line 5 and 6 both work same
//char *a=str;
//char *a = &str[0];
// for(int i=1; i>0;a++){
//     if(*a!=0){
//         printf("%c \n",*a);
//     }
//     else{
//         break;
//     }
  //  puts(str);
//}
//new          jiijji
// char *str="hui nnjnnbn hhhuj";
char di[]= "jiijji";
char *c= &di[0];
// printf("%c",*c);
int i=1;
// strcpy(di,str);
while(*c!='\0'){
  printf( "%c",*c);
    c++;
}
    
    
// 
// di[cot-1]='\0';
 puts(c);
 printf("Enter %c",di);
return 0;
}