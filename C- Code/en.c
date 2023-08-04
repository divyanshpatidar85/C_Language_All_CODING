#include<stdio.h>
void encrypt(char *i){
    while(*i != '\0'){
        *i=*i+1;
        printf("%c",*i);
    }
   

}

 int main(){
char str[100];
gets(str);
encrypt(str);
return 0;
}