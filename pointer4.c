#include<stdio.h>
void main()
{
  int x=10;
    int*ptr=&x;
     printf("%d\n",x);
    x++;
    printf("%d\n",*ptr);
    
    x++ + ++x;
     printf("%d\n",ptr);
     
}