#include<stdio.h>
 int main(){

    // char sex,ms;
    // int age;
    // printf("age,sex,ms");
    // scanf("%d %c %c",&age, &sex,&ms);
//     if(ms=='m')
//     printf("driver is insured");
//     else{
//         if(sex=='m'){
//             if(age>30)
//             printf("driver is insured");
//             else
//             printf("driver is not insured");
//         }
//         else{
//             if (age>25)
//               printf("driver is insured");
//                else
//             printf("driver is not insured");

//         }
//     }
// }
//my written
  char sex,ms;
    int age;
    printf("age,sex,ms");
    scanf("%d %c %c",&age, &sex,&ms);
    if(ms=='y'){
   printf("driver is insured");
    }
   else{
       if(sex=='m'){
           if(age>30){
                printf("driver is insured");

           }else{printf("driver is not insured");}
            if(sex=='f'){
           if(age>25){
                printf("driver is insured");

           }else{printf("driver is not insured");}
       }
   
  }
   }


    return 0;
}