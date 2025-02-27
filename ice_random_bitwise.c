/*
Author: Timothy Dacayanan
Course: CS 125
Assignment: In Class Exercises Bitwise Calculator + Random
Date: 1/27/2025
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
  int num1, num2, option, shift, direction;
  printf("Please enter 2 numbers.\n");
  printf("Or enter a character to randomly pick 2 numbers between 1 and 100\n");
  printf("First input: ");
  if (scanf("%d", &num1) == 1) 
  { 
  printf("Second input: ");
  scanf("%d", &num2);
  } 
  else 
  { 
    while ( getchar() != '\n' );
    srand(time(NULL));
    num1 = (rand() % 100) + 1;
    num2 = (rand() % 100) + 1;
    printf("First number: %i\n", num1);
    printf("Second number: %i\n", num2);
  }
  
  printf("Options:\n");
  printf("Bitwise AND(1)\n");
  printf("Bitwise OR(2)\n");
  printf("Bitwise XOR(3)\n");
  printf("Shift Bits(4)\n");
  printf("Please select an option: ");
  scanf("%i", &option);
  
  switch (option)
  {
    case (1):
      printf("Input 1: %d\n", num1);
      printf("Input 2: %d\n", num2);
      printf("Result: %i\n", (num1 & num2));
      break;
    case (2):
      printf("Input 1: %d\n", num1);
      printf("Input 2: %d\n", num2);
      printf("Result: %i\n", (num1 | num2));
      break;
    case (3):
      printf("Input 1: %d\n", num1);
      printf("Input 2: %d\n", num2);
      printf("Result: %i\n", (num1 ^ num2));
      break;
    case (4):
      printf("Please enter the number of times to shift: ");
      scanf("%i", &shift);
      printf("Please enter the direction(left(1) or right(2)): ");
      scanf("%i", &direction);
      switch (direction)
      {
        case(1):
          printf("Number 1: %d\n", num1 << shift);
          printf("Number 2: %d\n", num2 << shift);
          break;
        case(2):
          printf("Number 1: %d\n", num1 >> shift);
          printf("Number 2: %d\n", num2 >> shift);
          break;
      }
      break;
  }
}
