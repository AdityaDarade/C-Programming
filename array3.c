#include<stdio.h>
void main(){
    int arr[10]={10,12,13,15,16,17,19,20,22,23};

int x=sizeof arr/sizeof arr[0];

    int evencount=0;
     int oddcount=0;
     
   for(int i=0;i<x; i++){
 if(arr[i]%2==0){
    evencount++;
 }else{
    oddcount++;
}
}


printf("The odd is %d\n",oddcount);
printf("The even is %d\n",evencount);
}


