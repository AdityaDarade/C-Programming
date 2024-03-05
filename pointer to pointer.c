                #include<stdio.h>
void main(){                

    int x=10;
    int *ptr1=&x;
    int *ptr2 = ptr1;

    int **iptr3=&ptr1;

        printf("%d\n",x);
        printf("%d\n",*ptr1);
        printf("%d\n",*ptr2);
        printf("%d\n",**iptr3);
         }
