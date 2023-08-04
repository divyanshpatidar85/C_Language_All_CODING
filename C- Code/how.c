#include<stdio.h>
int main()
{
   int n, c = 80;


for(int i = 5; i <= 5 && i>0; i--)
   {
      for(int j = 1; j <= 2*5; j++) 
      {
         if( j <= i || j > (2*5-i)) printf("*");
         else printf(" ");
      }
      printf("\n");
   }
   for(int i = 1; i <= 5; i++)
   {
      for(int j= 1; j<= 2*5;j++) 
      {
         if( j<= i || j> (2*5-i)) printf("*");
         else printf(" ");
      }
      printf("\n");
   }

   // printf("program-2 \n");

   return 0;
}