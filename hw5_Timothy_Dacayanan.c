/*
Author: Timothy Dacayanan
Course: CS 125
Assignment: Homework 5: Functional Binary Helper Tool
Date: 2/9/2025
*/

#include <stdio.h>

int TakeUserInput(int input)
{
  //Takes one integer input
  //Scans for integer input, covering for bad inputs
  //Returns defined variable input
  int valid = 1;
  while (valid)
  {
    printf("Please input a number: ");
    if (!scanf("%i", &input))
    {
      scanf("%*[^\n]");
      printf("That is not a valid input!\n");
    }
    else
    {
      valid = 0;
    }
  }
  return input;
}

int RangeUserInput(int input, int Lower_Limit, int Upper_Limit)
{
  //Takes three integer inputs
  //Scans for integer input within the Lower and Upper Limits defined at start
  //Handles bad input
  //Returns defined variable input
  int valid = 1;
  while (valid)
  {
    printf("Please select an option: ");
    if (!scanf("%i", &input))
    {
      scanf("%*[^\n]");
      printf("That is not a valid input!\n");
    }
    else if ((input >= Lower_Limit) && (input <= Upper_Limit))
    {
      valid = 0;
    }
    else
    {
      printf("That is not a valid input!\n");
    }
  }
  return input;
}

int ReturnXOR(int in1, int in2)
{
  //Takes two integer inputs
  //Returns bitwise XOR result of both inputs
  return (in1 ^ in2);
}

int ReturnOR(int in1, int in2)
{
  //Takes two integer inputs
  //Returns bitwise OR result of both inputs
  return (in1 | in2);
}

int ReturnAND(int in1, int in2)
{
  //Takes two integer inputs
  //Returns bitwise AND result of both inputs
  return (in1 & in2);
}

int ReturnTwosComp(int in)
{
  //Takes one integer input
  //Returns 2's Complement of input
  return (~in + 1);
}

void FunctionSelect(int in1, int in2)
{
  //Takes two integer inputs
  //Creates Option Menu, where bitwise operations are selected
  //Doesn't return anything
  int select, res1, res2;
  printf("Options:\n");
  printf("(1) XOR operation (inputs: integer numbers, output: integer)\n");
  printf("(2) OR operation (inputs: integer numbers, output: integer)\n");
  printf("(3) AND operation (inputs: integer numbers, output: integer)\n");
  printf("(4) 2's Complement operation ");
  printf("(inputs: integer numbers, output: integer)\n");
  select = RangeUserInput(select, 1, 4);
	
  switch (select)
  {
    case (1):
      res1 = ReturnXOR(in1, in2);
      printf("Inputs: %i and %i\n", in1, in2);
      printf("Output: %i \n", res1);
      break;
    case(2):
      res1 = ReturnOR(in1, in2);
      printf("Inputs: %i and %i\n", in1, in2);
      printf("Output: %i \n", res1);
      break;
    case(3):
      res1 = ReturnAND(in1, in2);
      printf("Inputs: %i and %i\n", in1, in2);
      printf("Output: %i \n", res1);
      break;
    case(4):
      res1 = ReturnTwosComp(in1);
      res2 = ReturnTwosComp(in2);
      printf("Inputs: %i and %i\n", in1, in2);
      printf("Output: %i and %i\n", res1, res2);
      break;
  }
}

int main()
{
  int input1, input2, selection;

  printf("Welcome to a basic bitwise calculator!\n");
  
  input1 = TakeUserInput(input1);
  input2 = TakeUserInput(input2);
  
  selection = 1;
  
  while (selection != 3)
  {
    switch (selection)
    {
      case (1):
        FunctionSelect(input1, input2);
        break;
      case (2):
      	input1 = TakeUserInput(input1);
        input2 = TakeUserInput(input2);
        break;
    }
    if (selection != 3)
    {
      printf("(1) Perform another operation\n");
      printf("(2) Select new inputs\n");
      printf("(3) Quit and exit program\n");
      selection = RangeUserInput(selection, 1, 4);
    }
    
    if (selection == 3)
    {
      printf("Thank you for running this program!\n");
    }
  }
}
