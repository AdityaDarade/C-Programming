#include<stdio.h>
void main(){
    int x=11;
    int y=22;
    
    int *ptr1=x;
    int *ptr2=&x;
    int *ptr3=y;
    int *ptr4=&y;
    
    printf("%p\n",ptr1);
     printf("%p\n",ptr2);
      printf("%p\n",ptr3);
       printf("%p\n",ptr4);
    
}