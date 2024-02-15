#include<stdio.h>
void fun(){
   int arr[3][3]={10,20,30,40,50,60,70,80,90,};

       printf("%p\n",arr);
       printf("%p\n",&arr);
       printf("%p\n",arr[0]);
        printf("%p\n",&arr[0]);
         printf("%p\n",arr[0][0]);

      }

void main()
{

    char arr[3][2]={'a','b','c','d','e','f','g','h','i'};


       printf("%p  \n",arr);
       printf("%p \n",&arr);
      printf("%p  \n",arr[0]);
        printf("%p \n",&arr[0]);
         printf("%p  \n",arr[0][0]);
        
          fun;
}