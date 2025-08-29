#include <stdio.h>
float main()
{   float area,base,height ;
    printf("enetr base of triangle: ");
    scanf("%f",&base);
    printf("enetr height of triangle: ");
    scanf("%f",&height);
    area = base * height /2;
    printf("area of rectangle is %f\n",area);
    return 0;
}