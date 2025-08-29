#include <stdio.h>
float main()
{           float P,R,N,I;
            printf("enetr principal amount :");
            scanf("%f",&P);
            printf("enetr rate :");
            scanf("%f",&R);
            printf("enetr time :");
            scanf("%f",&N);
            I = P*R*N /100;
            printf("Interest is %f",I);
            return 0;         
           }