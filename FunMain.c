#include<stdio.h>

int a=10;                 //global variable
void fun ()
{
    int x = 20;         //local variable
    printf("In fun \n");
    
}
void main()   {
int x=30;              //local variable 

printf("start main \n");
fun();                //call to fun function

printf("End main \n");
}