#include<stdio.h>
void main(){
int x= 16;
int ans;

printf("%d \n",x);
ans= ++x + ++x + ++x;
printf("%d \n", x);
printf("%d \n",ans);
}