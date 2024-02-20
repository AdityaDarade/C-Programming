#include<stdio.h>
void main(){
 int*ptr;

for(int i=sizeof(char); i<=sizeof(ptr);++i){
     for(int j=1; j<=i;j++)

       printf("%d  ",j);
 
    printf("\n");
}  
    
}