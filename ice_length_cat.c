#include <stdio.h>
#include <string.h>

/*
Author: Timothy Dacayanan
Course: CS 125
Assignment: In Class Exercise: Length Enforcement
Date: 2/3/2025
*/

int main()
{
  char input1[256], input2[256];
  
  printf("Please input your first string: ");
  scanf("%s", input1);
  while(getchar() != '\n')

  printf("Please input your second string: ");
  scanf("%s", input2);
  while(getchar() != '\n')

  printf("%s\n", input1);
  printf("%s\n", input2);

  if ( (strlen(input1) > 8) || (strlen(input2) > 8) )
  {
    printf("String is too long.\n");
  }
  else
  {
    strcat(input1, input2);
    printf("New string: %s\n", input1);
  }

  
}
