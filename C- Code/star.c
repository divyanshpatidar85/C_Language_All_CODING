// #include<stdio.h>
//  int main(){
// int row;
// printf("Enter the number of raw");
// scanf("%d",&row);
// int p;
// int a=p;

// for(p=1;p>0;p++){
//     int i=row/2;
// for(i;i>0;i--){
//     printf(" ");
//    printf("hi %d ",i);
//     if(i=1){
//         for( a;a>0 && a<=p;a++){
//         printf("*");
//          printf("%d",a);
//        //  a=a+1;
//     }
// }
// }
//  printf("\n");
//   printf("\n p %d",p);
// }  

// return 0;
// }
#include<stdio.h>
 int main(){
int row;
printf("Enter the number of raw");
scanf("%d",&row);
int p=1;
for(p;p<=row;p++){
    int c=1;
    for(c;c<=row-p;c++){
        printf(" ");
    }
    //int d=p;
    for(int d=1;d<=p&&d>0;d++){
        printf("*");
        printf(" ");
    }
    printf("\n");
}
return 0;
 }