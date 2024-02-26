#include<stdio.h>
void main(){
    int size;
    printf("Enter the size: \n");
    scanf("%d",&size);
     
    int arr[size];
   printf ("Enter Element\n");
    for(int i=0; i<size;i++)
    scanf("%d",&arr[i]);
        
        int search;
        
        printf("Enter search element\n");
        scanf("%d",&search);
        int flag=0;
        
        for(int i=0; i<size;i++){
          if(search==arr[i])
              flag=1; 
        }   
        
        if (flag==1){
        printf("is present" );
        }else{
            printf("not present ");
        } 
}
            
        
    
    
    
    
    
    
    
