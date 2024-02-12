#include<stdio.h>
void main(){
    int row;{
       printf("Enter the row\n");
       scanf("%d ",&row);
    }
    for(int i=1;i<=row;i++){
    for(int j=1;j<=row;j++)
       
   printf("%d ",j);
   (row=row+1);
   printf("\n");
    }
}
