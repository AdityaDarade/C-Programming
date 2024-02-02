//In This Code the from Input to output
#include<stdio.h>
void main(){
int x,y;                                  //x=2 y =4
      printf("enter the value\n ");
      scanf("%d",&x);
      
      printf("enter the value\n ");
      scanf("%d",&y);

int z=(x<y)?
  x:y;

    printf("output:%d\n",z);        //z=4
}