#include<stdio.h>
void main(){
 int*ptr;

for(int i=sizeof(ptr); i<=sizeof(double);--i){
     for(int j=1; j<=i;j++)

       printf("%d ",i,j);
 
   printf("\n");
}
}