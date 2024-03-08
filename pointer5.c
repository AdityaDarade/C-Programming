#include<stdio.h>
void main(){
  char ch1='A';
  char ch2='B';
  char ch3='c';
  char *ptr=&ch1;
  
  printf("%p\n",ptr);
  printf("%c\n",*ptr);
  
  printf("%p\n",(ptr+1));
  printf("%c\n",*(ptr+1));
  
  printf("%p\n",(ptr+2));
  printf("%c\n",*(ptr+2));
}