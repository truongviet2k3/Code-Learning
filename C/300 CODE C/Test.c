#include <stdio.h>
int main() {
 unsigned cel, fah;
 printf( "%10s%14s\n", "Celcius", "Fahrenheit" );
 for ( cel = 0; cel <= 10; ++cel )
 printf( "%10u%14.2f\n", cel, 9.0 * cel / 5 + 32 );
 printf( "\n%10s%14s\n", "Fahrenheit", "Celcius" );
 for ( fah = 32; fah <= 42; ++fah )
 printf( "%10u%14.2f\n", fah, 5.0 * ( fah - 32 ) / 9 );
 return 0;
}
