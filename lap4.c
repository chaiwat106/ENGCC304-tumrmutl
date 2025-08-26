#include <stdio.h>

int main(void) {

    char EmployeesID[10] ;
    double WorkingHrs , AmountHr , TotalPay ;

    printf( "Input the Employees ID(Max. 10 chars) : " ) ;
    scanf( "%10s", EmployeesID ) ;

    printf( "Input the Working Hrs : " ) ;
    scanf( "%lf", &WorkingHrs ) ;

    printf( "Salary Amount/Hr : " ) ;
    scanf( "%lf" , &AmountHr ) ;

    TotalPay = WorkingHrs * AmountHr ;

    printf( "- - - - - -\n" ) ;
    printf( "Employees ID = %s \n" , EmployeesID ) ;
    printf( "Salary =  %.2f $\n", TotalPay ) ;

    return 0 ;
}
