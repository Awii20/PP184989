#include <stdio.h>

int main() {
    int a = 16; // a =16 , b =
    int b = 7;  // a =16 , b =7
    a = a + b;  // a =23 , b =7
    b = a & b;  // a =23 , b =7
    a = a ^ b;  // a =16 , b =7
    b = ~a;     // a =16 , b =-17
    b = a - b;  // a =16 , b =33
    b = a++;    // a = 17, b =16
    b = 3 * --a;  // a =16 , b =48
    a = b / a;  // a =3 , b =48
    b = a << 2; // a =3 , b =12
    a = a - b;  // a =-9 , b =12
    a = b >> 1; // a =6 , b =12
    return 0;
}
