#include <stdio.h>

/*
Author: Timothy Dacayanan
Course: CS 125
Assignment: In Class Exercises, Conditionals
Date: 1/8/2025
*/

//
int main()
{
  float total_cost = 0;
  int food_choice = 0;
  int drink_choice = 0;
  
  printf("Hello customer!\n"); 

  printf("Would you like a burger(1), taco(2), pizza(3), or steak(4)?\n");
  scanf("%d", &food_choice);
  
  printf("Would you like to drink soda(1), lemonade(2), tea(3), or juice(4)?\n");
  scanf("%d", &drink_choice);

  switch (food_choice) {
  case 1:
    total_cost += 10;
    break;
  case 2:
    total_cost += 5;
    break;
  case 3:
    total_cost += 15;
    break;
  case 4:
    total_cost += 20;
    break;
  }
  
  if (drink_choice == 1)
  {
    total_cost += 4;
  }
  else if (drink_choice == 2)
  {
    total_cost += 3;
  }
  else if (drink_choice == 3)
  {
    total_cost += 2;
  }
  else
  {
    total_cost += 1;
  }
  
  total_cost += 1.59;

  printf("You final cost is $%.2f\n", total_cost);
  printf("Thank you for dining here!\n");
}

