#include<stdio.h>
 int main(){
 int n;int sum=0;
 printf("Enter total count of number which you required avg \n");
 scanf("%d",&n);
 int array[n];
 for(int i=0;i<n;i++){
    printf("Enter %d number \n",i+1);
    scanf("%d",&array[i]);
 }
 for(int j=0;j<n;j++){
    sum= sum + array[j];
 }
 printf("sum  of all number %d \n",sum);
 printf("average 0.01%f\n ",sum/n);
return 0;
}