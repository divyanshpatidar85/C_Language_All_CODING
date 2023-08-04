#include<stdio.h>
 int main(){
int row,c,d,count=0;
printf("Enter the number of raw");
scanf("%d",&row);
//d==row is liye kiya kyokki line15 me space (wale concept ke liye )deni thi
d=row;
//c=1 is liya kyoki row ki value niche change ho rahi thi & row==d put kar diya
for(int c=1;c<= d;c++){
  for(int star=1;star<=c;star++){
    printf(" * ");
  }
  //space dene ke liye (2*row)-3 formule ki help li
  for(int space=1;space<=(2*row)-3;space++){
    printf("   ");
  }
 //wapas symmetry me star print karwa diye (isme jab c==6 aayega tab j 5 tak hi
 // chalega)&& or c==5 tab bhi j 5 tak chalega
  for(int star=1;star<=c;star++){
  
if(star<d){
  printf(" * ");
 
}
  

   }
 
  

printf("\n");
row=row-1;
}
return 0;
}