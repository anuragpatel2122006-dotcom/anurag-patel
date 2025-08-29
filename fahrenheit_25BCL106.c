
#include <stdio.h>
float main()
{   float f,c;
    printf("enetr fahrenheit value which will be converted to celcius :");
    scanf("%f",&f);
    c = 5* (f-32) /9;
    printf("%f fahrenheit = %f  celcius ",f,c);
    return 0;
} 