#include <stdio.h>
int main()
{   int a,b,c;
    printf("enetr dollar amount which you want to convert pound :");
    scanf("%d",&a);
    b = a * 48;
    c = b / 70;
    printf("%d dollar is %d pound ",a,c);
    return 0;
}