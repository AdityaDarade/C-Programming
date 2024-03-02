#include<stdio.h>
void main(){
    double x= 25.5;
    char y='A';
    
     double *ptr1= &x;
    char *ptr2= &y;
    
    printf("%p\n",&x);
    printf("%p\n",&y);
    
    printf("%p\n",x);
    printf("%p\n",y);
    
}