//In This Code Reletion bet^n arr and ptr is shown
#include<stdio.h>
void main(){
    int arr[]={10,20,30,40,50};
    int arr1[]={60,70,80,90,100};
    
    int *iptr=arr+1;
    int *ptr1=arr1+1;
   
    
    printf("%d\n",*ptr1);
    printf("%d\n",*iptr);
    
    printf("%p\n",ptr1);
    printf("%p\n",iptr);
}