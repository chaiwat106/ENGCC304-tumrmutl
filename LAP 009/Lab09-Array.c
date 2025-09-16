#include <stdio.h>
#include <stdbool.h>

// ฟังก์ชันตรวจสอบจำนวนเฉพาะ
bool isPrime( int n ) {
    if( n <= 1 ) return false ;    // เลข <=1 ไม่ใช่จำนวนเฉพาะ
    for( int i = 2 ; i * i <= n ; i++ ) {
        if( n % i == 0 ) return false ; // ถ้ามีตัวหารลงตัวไม่ใช่จำนวนเฉพาะ
    }
    return true ;
}

int main() {
    
    int n ;

    printf( "Enter number : " ) ;
    scanf( "%d" , &n ) ;

    int arr[n] ;
    
    // รับค่าจากผู้ใช้
    for( int i = 0 ; i < n ; i++ ) {
        printf( "Enter value %d : " , i + 1 ) ;
        scanf( "%d" , &arr[i] ) ;
    }

    printf( "Number : " ) ;
    // ตรวจสอบและแสดงผล
    for( int i = 0 ; i < n ; i++ ) {
        if( isPrime( arr[i] ) ) {
            printf( " %d " , arr[i] ) ;  // ถ้าเป็นจำนวนเฉพาะ แสดงตัวเลข
        } else {
            printf( " # " ) ;           // ไม่ใช่ แสดงเครื่องหมาย #
        }
    }

    return 0 ;

}
