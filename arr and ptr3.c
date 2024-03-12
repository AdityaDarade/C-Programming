#include<stdio.h>
void main(){
    int arr[]={10,20,30,40,50,60};
    int *iptr=&arr[0];
    
    printf("%p\n",&arr[0]);
    (*iptr)++;
    for(int i=1; i<6; i++)
    printf("%p\n",&arr[i]);
}