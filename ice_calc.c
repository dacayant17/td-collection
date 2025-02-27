/*
 * Author: Timothy Dacayanan
 * Course: CS 125
 * Assignment: In Class Exercise: Main Function Control
 * Date: 2/24/2025
*/

#include <stdio.h>
#include <stdlib.h>

void multiply(int num1, int num2)
{
  printf("%i * %i = %i\n", num1, num2, (num1 * num2));
}

void divide(int num1, int num2)
{
  int check = num2;
  if (check == 0)
  {
    printf("Cannot divide by 0\n");
  }
  else
  {
    printf("%i / %i = %i\n",num1, num2, num1 / num2);
  }
}

void add(int num1, int num2)
{
  printf("%i + %i = %i\n", num1, num2, num1 + num2);
}

void subtract(int num1, int num2)
{
  printf("%i - %i = %i\n", num1, num2, num1 - num2);
}

int main(int argc, char * argv[])
{
  int in1 = atoi(argv[1]);
  int in2 = atoi(argv[3]);
   
  if (strcmp("+", argv[2]) == 0)
  {
    add(in1, in2);
  }
  else if (strcmp("-", argv[2]) == 0)
  {
    subtract(in1, in2);
  }
  else if (strcmp("/", argv[2]) == 0)
  {
    divide(in1, in2);
  }
  else if (strcmp("x", argv[2]) == 0)
  {
    multiply(in1, in2);
  }
  else
  {
    printf("Not a valid input\n");
  }
}
