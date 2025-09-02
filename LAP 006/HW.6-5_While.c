#include <stdio.h>

int main() {
    int n , i , j , isPrime ;

    printf( "Enter number : ")  ;
    scanf( "%d" , &n ) ;

    i = n ;
    while( i >= 2 ) {
        isPrime = 1 ; // สมมติว่าเป็นจำนวนเฉพาะ
        j = 2 ;

        // ตรวจสอบตัวหารโดยใช้ while
        while( j < i ) {
            if( i % j == 0 ) {
                isPrime = 0 ; // ถ้าหารลงตัว → ไม่ใช่จำนวนเฉพาะ
                break ;
            }
            j++ ;
        }

        if( isPrime ) {
            printf( "%d ", i ) ;
        }

        i-- ; // ลดค่าลง
    } // end while

    return 0 ;
}// end main
