#include <stdio.h>
float main()
{   float net_salary,gross_salary,deduction,allowance ;
    printf("enetr gross_salary : ");
    scanf("%f",&gross_salary);
    printf("enetr allowance : ");
    scanf("%f",&allowance);
    printf("enetr deduction : ");
    scanf("%f",&deduction);
    net_salary = gross_salary + (allowance * 10)/100 - (deduction * 3)/100 ;
    printf("net_salary %f",net_salary);
    return 0;
}