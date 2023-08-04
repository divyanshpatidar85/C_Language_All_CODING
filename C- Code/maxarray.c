#include<stdio.h>
 int main(){
 int n,t;int sum=0;
 printf("Enter total count of number which you required avg \n");
 scanf("%d",&n);
 int array[n];
 for(int i=0;i<n;i++){
    printf("Enter %d number \n",i+1);
    scanf("%d",&array[i]);
 }
 for( int i=0;i<n;i++){
    // printf("Enter %d number \n",array[i+1]);
 if(array[i]>array[i+1]){
    t=array[i];
    array[i]=array[i+1];
     array[i+1]=t; 
  //array[i]>array[i+1];
 //printf("hi");
 printf("%d",array[i]);
 }
 }
 }
 //printf("%d",array[i]);
//  if(array[0]>array[1]){
//       printf("hi");
//     //  break;
//  } else if 
// return 0;
// }
//  }
// #include<conio.h>
// #include<stdio.h>
// #define max 100
// void maxmin(int[],int);
// void main()
// {
//     int a[max],i,n;
//     printf("enter the limit of array: ");
//     scanf("%d",&n);
//     printf("enter the elements: ");
//     for(i=0;i<n;i++)
//     {
//          scanf("%d",&a[i]);
//     }
//     maxmin(a,n);
//     getch();
// }
// void maxmin(int a[max],int n)
// {
//     int i,b[max],t,j;
//     for(i=0;i<n;i++)
//     {
//          b[i]=a[i];
//     }
//     for(i=0;i<n;i++)
//     {
//         for(j=0;j<n-1-i;j++)
//         {
//             if(b[j]>b[j+1])
//             {
//                 t=b[j];
//                 b[j]=b[j+1];
//                 b[j+1]=t;
//             }
//         }
//     }
//     for(j=0;j<n;j++)
//     {
//          if(a[j]==b[1])
//          {
//               printf("\nThe second minimum element is %d and its position is:  %d ",a[j],j);
//          }
//          if(a[j]==b[n-2])
//          {
//               printf("\nThe second maximum element is %d and its position is: %d",a[j],j);
//          }
//      }
// }
//out of control
