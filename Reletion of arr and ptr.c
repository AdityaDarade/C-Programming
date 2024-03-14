//In This Code Reletion bet^n arr and ptr is shown
#include<stdio.h>
void main(){
    int arr[]={1,2,3,4,5};
    int arr1[]={6,7,8,9,10};
    
    int *iptr=arr;
    int *ptr1=arr;
    
    iptr++;
    ptr1++;
    
    printf("%d\n",*ptr1);
    printf("%d\n",*iptr);
    
    printf("%p\n",ptr1);
    printf("%p\n",iptr);
}