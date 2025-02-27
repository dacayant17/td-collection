#include <stdio.h>

/*
Author: Timothy Dacayanan
Course: CS 125
Assignment: In Class Exercise Count Till
Date: 1/13/2025
*/

int main() {
  int current_number = 0;
  int final_number = 0;
  
  printf("Please enter a number between 1 and 1000: ");
  scanf("%d", &final_number);
  if ((final_number <= 1000) & (final_number >= 0))
  {
    printf("%d\n", current_number);
    while(current_number < final_number)
    {
      printf("%d\n", ++current_number);
    }
  }
  else
  {
    printf("That is not a valid number.\n");
  }
}
