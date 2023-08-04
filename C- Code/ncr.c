   #include<stdio.h>
int main (){
int n,r,nfact=1,rfact=1,nrfact=1;
//int nr;
int results;

printf("enter the power of c \n");
scanf("%d",&n);
printf("enter the base of c\n");
scanf("%d",&r);
// nr= n-r ;
// printf("nr = %d\n",nr);
for(int i=1; i<=n;i++){
nfact = nfact*i;
}
//printf("nfact = %d\n",nfact);
for(int j=1; j<=r;j++){
rfact = rfact*j;
}
//printf("rfact = %d\n",rfact);
for(int k=1; k<=(n-r);k++){
nrfact = nrfact*k;

}
//printf("nrfact = %d \n",nrfact);
if((n-r)>0){

results = nfact/((rfact)*(nrfact));
printf("%d c% d = %d",n,r,results);
}
else{
    printf("not define");
}

return 0;
    
   
}