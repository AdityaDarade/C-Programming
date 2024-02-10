 //This Code is of reverse even No and standard odd No.
 #include<stdio.h>
void main()
{
    int start=2;
    int end=9;
    {
     printf("%d",start);
   for(int i=start+2; i<=end;i+=2)
       printf(" %d",i);
       printf(" \n");
        
    }
     {
     printf("%d",start+1);
    for(int i=start+3;i<=end ;i+=2)
    printf(" %d",i);}
}

