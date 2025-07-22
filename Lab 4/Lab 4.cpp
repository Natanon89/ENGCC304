#include <stdio.h>

int main(void) 
{
    char EmployeesID[11] ;
    double WorkingHrs , AmountHr , TotalPay ;

    printf( "Input the Employees ID(Max. 10 chars): " ) ;
    scanf( "%10s", EmployeesID);

    printf( "Input the Working Hrs: " ) ;
    scanf("%lf", &WorkingHrs);

    printf( "Salary Amount/Hr: " ) ;
    scanf("%lf", &AmountHr);

    TotalPay = WorkingHrs * AmountHr ;

    printf("\nEmployees ID = %s\n", EmployeesID) ;
    printf("Salary = U$ %.2f \n", TotalPay) ;

    return 0;
}