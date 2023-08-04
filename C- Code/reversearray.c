#include<stdio.h>
 int main(){
    int i,j,n;
 printf("Enter total count of number which you required avg \n");
 scanf("%d",&n);
 int array[n];
 for(int i=0;i<n;i++){
    printf("Enter %d number \n",i+1);
    scanf("%d",&array[i]);
 }
 for(( i=n-1,j=0);(i<n,j<n);(i--,j++)){
    printf("reverse array %d  element is %d ,",j+1,array[i]);
    //scanf("%d",&array[i]);
 }

return 0;
}