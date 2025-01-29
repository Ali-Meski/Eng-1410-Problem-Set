// Ali Meski
// October 10th, 2024
// Write a program to output the number of digits in an input long integer
// number as well as the sum the digits in that input.

#include <math.h>
#include <stdio.h>

int main() {
  int integer_num;
  int sum;
  // Asks and gets integer number from user
  printf("Please enter an integer number: ");
  scanf("%d", &integer_num);

  // Gets length of the integer number
  int num_digits = floor(log10(abs(integer_num))) + 1;

// loops for length of the integer
  for (int i = 0; i < num_digits; i++) {
    // adds the last value in the digit to the sum
    sum += integer_num % 10;
    // gets rid of last digit in integer so we can loop again and add the new last digit in the integer
    integer_num = integer_num/10;
  }
  printf("Inputted integer is %d digits long and sum of the digits is %d", num_digits, sum);
  return 0;
}
// Asd