#include <stdio.h>
float main()                               //swap of two numbers
{           float NUM1 , NUM2 ,a;
            printf("swaping of two numbers\n");
            printf("enter NUM1 :");
            scanf("%f" , &NUM1);
            printf("enter NUM2 :");
            scanf("%f" , &NUM2);
            printf("two numbers are %f and %f",NUM1 , NUM2);
            a = NUM1;
            NUM1 = NUM2;
            NUM2 = a;
            printf(" swap is %f and %f",NUM1 , NUM2);
            return();
            }