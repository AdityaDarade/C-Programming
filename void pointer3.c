#include<stdio.h>
void main(){
 
    int arr1[2]={10,20};
    char arr2[2]={'A','B'};
    float arr3[1]={20.25};
    
  int* varr[3] = {arr1,arr2,arr3}; 
    printf("%p arr\n",varr);
    printf("%p int\n",varr[0]);
    printf("%p char\n",varr[1]);
    printf("%p float\n",varr[2]);
}
