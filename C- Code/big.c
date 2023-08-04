#include<stdio.h>
 int main(){
int a,b,c;
printf("enert ");
scanf("%d",&a);
int mat[a];
for(int i=0;i<a;i++){
    scanf("%d",&mat[i]);
}
if(mat[0]>mat[1]){
b=mat[1];
}
else if(mat[0]==mat[1]){
b=mat[0];
}
else if(mat[0]<mat[1]){
    b=mat[0];
}
for(int c=0;c<a;c++){
    if(mat[c]<b){
        b=mat[c];
    }
}
//printf("jai %d",b);
for(int c=0;c<a;c++){
    if (&& mat[c]<b){
        b=mat[c];
    }
}

return 0;
}