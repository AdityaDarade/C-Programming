#include<stdio.h>
void main()
{
    int input;
      printf("Enter the month\n");
      scanf("%d",&input);
      
      switch(input){
          
          case 1:
                     printf("january is of 31 days\n");
                     break;
            
          case 2:
                   printf("february is not of 31 days\n");
                  //break;
            
          case 3:
               printf("may is not of 31 days\n");
               break;
            case 7:
              printf("july is of 31 days\n");
              break;
           default:
               printf("default\n");
      } 
}     
         
    