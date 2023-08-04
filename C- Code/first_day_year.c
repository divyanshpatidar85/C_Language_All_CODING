// // Online C compiler to run C program online
// #include<stdio.h>
//  int main(){
 
// int year,a,d=0,b;
// int f=0;
// printf("enter the year ");
// scanf("%d",&year);
// a= year-2001;
// if(a<=6){
// b=(a)/4;
// printf(" new nb b is %d \n",b);
// a=a+b+1;

// }
// else if(a>6){
//    // if(year%400==0 && year%4==0 && year%100==0){
//     b=(a)/4;
//   for(int a=1;a<year;a++){
        
//         if(year%4==0 && year%400!=0 && year%100==0){
//            f=f+1;
//             printf(" new mknjn f is %d \n",f);
//        b=b-f-1;
//         }
    
//     a=a%7;
//     //printf(" new a is %d \n",a);
//     a=a+b+1;
//    // printf(" new mknjn a is %d \n",a);
// if(a>7){
//     a=a%7;
//     if(a==0){
//         a=7;
//     }
   
//     //    printf(" new mknjn f is %d \n",f);
//     //    b=b-f-1;
//     }
// }
// //printf(" new nb b is %d \n",b);


// }
// // printf(" a is %d \n",a);
// // printf(" b is %d \n",b);
// // printf(" d is %d \n",d);

// if(a==1){
//     printf("monday ");
// }
// else if(a==2){
//     printf("Tuesday ");
// }else if(a==3){
//     printf("Wednasday ");
// }else if(a==4){
//     printf("thusday ");
// }else if(a==5){
//     printf("friday ");
// }else if(a==6){
//     printf("saturday ");
// }else if(a==7){
//     printf("sunday ");
// }
// }  
#include <stdio.h>  
  
int main()  
{  
    int ref_year = 1900, year, leap = 0, diff, total_days = 0, day = 0;  
  
    printf("Enter a year between 1900 and 2099\n");  
    scanf("%d", &year);  
  
    diff = year - ref_year;  
  
    while(ref_year < year)  
    {  
        if(ref_year % 100 == 0)  
        {  
            if(ref_year % 400 == 0)  
            {  
                leap++;  
            }  
        }  
        else  
        {  
            if(ref_year % 4 == 0)  
            {  
                leap++;  
            }  
        }  
        ref_year++;  
    }  
  
    total_days = (diff - leap) * 365 + leap * 366;  
    day        = total_days % 7;  
  
    printf("\nThe day on 01 January %d was ", year);  
  
    switch(day)  
    {  
        case 0: printf("Monday.\n");  
                break;  
        case 1: printf("Tuesday.\n");  
                break;  
        case 2: printf("Wednesday.\n");  
                break;  
        case 3: printf("Thursday.\n");  
                break;  
        case 4: printf("Friday.\n");  
                break;  
        case 5: printf("Saturday.\n");  
                break;  
        case 6: printf("Sunday.\n");  
                break;  
    }  
  
    return 0;  
}  