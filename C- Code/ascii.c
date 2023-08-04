// #include<stdio.h>
//  int main(){
// for(int count=0;count <=6;count++){
//     for(char alpha=65;alpha<=(71-count);alpha++){
//         printf("%c ",alpha);
//     }
//     for(int space=1;space>0 && space <=1+(count-1)*2;space++){
//         printf("  ");
//     }
//     if(71-count==71){
// //         for(char d=70;d>=65;d--){
// //             printf("%c ",d);
// // //         }
// // //         }else{
// // //             for(char e=71-count; e>=65;e--){
// // //                 printf("%c ",e);
// // //             }
// // //         }
    
// // //     printf("\n");
// // //         }
        
    

// // // // return 0;
// // // // }
// // // #include <stdio.h>

// // // int main() {
// // //    int b=1;
   
   
// // //     // for(int i=1;1;1){
// // //        for( b; b<=5 && b>0 ;b++){
// // //            for( int c=b; c<=5;c++){
// // //        printf("%d",c);
// // //        }
// // //         printf("\n");
      
// // //        }
      
// // //        b=b+1;
       
       
// // //  //   }
// // //     return 0;
// // //     }
// #include<stdio.h>
//  int main(){
//      int c=1;
// for(int a=1;a<=5;a++){
//     for(int b=5-a;b>0;b--){
//         printf(" ");
//     }
//     for(c;c<=a&&c>0;c++){
//     for(int d=c;d>0;d--){
//         printf("%d",d);
    
// }
// break;
//     }
//     c=c+1;
//     printf("\n");
// }
// return 0;
// }
// #include<stdio.h>
//  int main(){
// for(int i=1;i<=5;i++){
//     for(int b =1;b<i;b++){
//         printf(" ");
//     }
//     for(int c=1;c<=6-i;c++){
//         printf("%d",c);
//     }
//     printf("\n");
// }
// return 0;
// }
//#include <stdio.h>
//using namespace std;
// int main() {
//   //  int i=1;
//     // Write C++ code here
//    for(int i=5;i<=5 && i>0;i--){
//        for(int b= 5-i;b>0;b--){
//            printf(" ");
//        }
//        for(int j=1;j<=i;j++){
//            printf("* ");
//        }
//       printf("\n");
//    }
//  for(int i=1;i<=5;i++){
//        for(int b= 5-i;b>0;b--){
//            printf(" ");
//        }
//        for(int j=1;j<=i;j++){
//            printf("* ");;
//        }
//       printf("\n");
//    }
//     return 0;
// }
#include <iostream>
using namespace std;
//std:
// int main()
// #include <iostream>
// using namespace std;

int main()
{
     int i, j, rows;
     
    

     
     for(i=1; i<=5; i++) 
     {
           /* Print leading spaces */
           for(j=1; j<6-i; j++)
           {
                cout<<" ";
           }

           /* Print star */
           for(j=1; j<=(2*i-1); j++)
           {
                cout<<"*";
           }

           /* Move to next line */
           cout<<"\n";
     } 
      for(i=4; i>0; i--) 
     {
           /* Print leading spaces */
           for(j=1; j<=5-i; j++)
           {
                cout<<" ";
           }

           /* Print star */
           for(j=1; j<=(2*i-1); j++)
           {
                cout<<"*";
           }

           /* Move to next line */
           cout<<"\n";
     } 
     return 0;
 }