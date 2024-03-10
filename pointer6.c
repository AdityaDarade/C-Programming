#include<stdio.h>
void main(){
    int x = 16;
    int *ptr = &x;
    int *cptr=&x;
    
    printf("%d\n",*ptr);                       //10
    printf("%d\n",*cptr);                       //10
     printf("%p\n",ptr);                      //address
    printf("%p\n",cptr);                       //address
        printf("%d\n",ptr);                      //garbeg value
    printf("%d\n",cptr);                          //garbeg value
}