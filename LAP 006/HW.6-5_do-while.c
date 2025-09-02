#include <stdio.h>

int main() {
    int n , i , j , isPrime ;

    printf( "Enter number : " ) ;
    scanf( "%d", &n ) ;

    i = n ;
    do {
        if( i >= 2 ) {
            isPrime = 1 ;  // สมมติว่าเป็นจำนวนเฉพาะ
            j = 2 ;

            // ตรวจสอบตัวประกอบโดยใช้ do...while
            do {
                if( i % j == 0 ) {
                    isPrime = 0 ; // ถ้าหารลงตัว แสดงว่าไม่ใช่จำนวนเฉพาะ
                    break ;
                }
                j++;
            } while( j < i ) ;

            if( isPrime ) {
                printf( "%d " , i ) ;
            }
        }
        i -- ; // ลดค่าลง
    } while( i >= 2 ) ;

    return 0 ;

} // end main
