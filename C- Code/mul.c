#include<stdio.h>

 int main(){
     int i;
     int j=0;
 printf("Enter a num which you required table \n");
 scanf("%d",&i);
 int mat[i][j];

  
 while(j>=0 && j<10){
      j++;
     //printf("[%d] \n",i);
    mat[i][j]=i*j;
    printf(" your table is [%d]*[%d]=[%d]\n",i,j,mat[i][j]);
 }
// while(j>=0 && j<10){
//     //  j++;
//       printf("[%d]*[%d]=[%d]\n",i,j,mat[1][j]);
//    // mat[i][j]=i*j;
//  }
return 0;
}