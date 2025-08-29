
#include <stdio.h>
float main()
{   float c,f;
    printf("enetr celcius value which will be converted to fahrenheit:");
    scanf("%f",&c);
    f = (9*c /5) + 32;
    printf("%f celcius = %f fahrenheit ",c,f);
    return 0;
}