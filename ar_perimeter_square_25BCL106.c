#include <stdio.h>
float main()
{   float area , perimeter,side ;
    printf("enetr side of square");
    scanf("%f",&side);
    area = side * side;
    perimeter = 4 * side;
    printf("area of square is %f",area);
    printf("perimeter of square is %f",perimeter);
    return 0;
}