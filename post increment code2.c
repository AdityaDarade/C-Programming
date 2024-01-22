#include<stdio.h>
void main(){
int x= 11;
int ans;

printf("%d \n",x);
ans= x++ + x++ + x++ + x++;
printf("%d \n", x);
printf("%d \n",ans);
}