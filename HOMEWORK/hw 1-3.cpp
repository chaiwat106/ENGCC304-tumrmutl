#include <stdio.h>

int main() {

    char Name[50] ;
    char lastName[50] ;
    int Age = 0 ;
    char University[50] ;
    char province[50] ;
    char country[50] ;



    printf( " name " ) ;
    scanf( "%s", Name ) ;
    printf( " lastname " ) ;
    scanf( "%s", lastName ) ;
    printf( " age " ) ;
    scanf( "%d", &Age ) ;
    printf( " University " ) ;
    scanf( "%s", University ) ;
    printf( " province " ) ;
    scanf( "%s", province ) ;
    printf( " country " ) ;
    scanf( "%s", country ) ;

    printf( "- - - - - -\n" ) ;
    printf( "Hello %s %s\n", Name, lastName  ) ;
    printf( "Age = %d\n", Age ) ;
    printf( "University = %s\n", University ) ;
    printf( "Province = %s\n", province ) ;
    printf( "Country = %s\n", country ) ;

}