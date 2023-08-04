

#include<stdio.h>
 int main(){
 
int year,a,d=0,b=0;

printf("enter the year ");
scanf("%d",&year);
a= year-2001;
for(int i=2001;i<year;i++){
    if(i%4==0){
        if(i%100==0 && i%400!=0){
            b=b-1;
        }
        b=b+1;
        printf("now loop b=%d\n",b);
    }
}
printf("now b=%d",b);
// aasni se day hath aa jayega...
if(a<=6){
//b=(a)/4;
printf(" new nb b is %d \n",b);
a=a+b+1;

}
//ab A bada ho raha tha printf se isliye use (1 to 7 me lane ke liye) ye wala likha
else if(a>6){
   // b=(a)/4;
    
    a=a%7;
    printf(" new a is %d \n",a);
    a=a+b+1;
    printf(" new mknjn a is %d \n",a);
if(a>7){
    a=a%7;
    // 2090,2073 me a==0 aa raha hai kyoki a perfect divide ho raha hai 
    //is liya ye naya khel kehla
    if(a==0){
        a=7;
    }
}
printf(" new nb b is %d \n",b);


}
printf(" a is %d \n",a);
printf(" b is %d \n",b);
printf(" d is %d \n",d);

if(a==1){
    printf("monday ");
}
else if(a==2){
    printf("Tuesday ");
}else if(a==3){
    printf("Wednasday ");
}else if(a==4){
    printf("thursday ");
}else if(a==5){
    printf("friday ");
}else if(a==6){
    printf("saturday ");
}else if(a==7){
    printf("sunday ");
}
}   

 
