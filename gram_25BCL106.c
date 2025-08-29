#include <stdio.h>
float main()
{   float a,b;
    printf("enetr gram which you want to convert into kg :");
    scanf("%f",&a);
    b = a / 1000;
    printf("%f gram is %f kg ",a,b);
    return 0;
}