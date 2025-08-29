#include <stdio.h>
float main()
{   float a,b,c,d;
    printf("enetr byte which will be converted into KB , MB , GB :");
    scanf("%f",&a);
    b = a / 1000;
    c = a / 1000000;
    d = a / 1000000000;
    printf("%f bytes is %f KB/n%f bytes %f is MB/n%f bytes is %f GB ",a,b,a,c,a,d);
    return 0;
}