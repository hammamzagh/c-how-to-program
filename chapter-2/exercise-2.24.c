 (Largest Integers) Write a program that reads in three integers and then determines and
prints the largest in the group. 
  
#include <stdio.h>

int main() {
  int number;

  printf( "Enter an integer: \n" );
  scanf( "%d", &number );

  if ( number % 2 == 0 ) {
    printf( "%d is an even number.\n", number );
  } else {
    printf( "%d is an odd number. \n", number );
  }

  return 0;
}
