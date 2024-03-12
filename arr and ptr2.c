#include<stdio.h>
void main(){
         int arr[]={90,30,40,50,60};
         int *iptr=&(arr[0]);
         
         printf("%d\n",*iptr);
         *iptr++;
         
         *iptr=20;
         
         for(int i=0;i<=5;i++)
         {
              printf("%d\n",arr[i]); 
         }
}