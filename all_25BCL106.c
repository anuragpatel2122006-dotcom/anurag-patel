#include <stdio.h>
int main()
{   int a,b,c,d,e,f;
    printf("enetr 2 nos:");
    scanf("%d %d",&a,&b);
    c = a + b;
    d = a - b;
    e = a * b;
    f = a / b;
    printf("%d + %d = %d\n%d - %d = %d\n%d * %d = %d\n%d / %d = %d",a,b,c,a,b,d,a,b,e,a,b,f);
    return 0;
}