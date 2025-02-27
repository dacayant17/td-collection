/*
Author: Timothy Dacayanan
Course: CS 125
Assignment: In Class Exercise: Manual String Concatenation
Date: 2/5/2025
*/

#include <stdio.h>
#include <string.h>

int main()
{
  char input1[50];
  char input2[50];

  printf("Please enter your first string: ");
  scanf("%s", input1);
  
  printf("Please enter your second string: ");
  scanf("%s", input2);
  
  strcat(input1, "+");
  strcat(input1, input2);
  
  printf("%s\n", input1);
  
}
