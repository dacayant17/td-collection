
/*
 * Author: Timothy Dacayanan
 * Course: CS 125
 * Assignment: Homework 6: Recursive Matrix
 * Date: 2/14/2025
*/


#include <stdio.h>

void ZeroArray(int size, int array[size][size])
{
  int i, j;
  for (i = 0; i < size; i++)
  {
    for (j = 0; j < size; j++)
    {
      array[i][j] = 0;
    }
  }
}

void PrintArray(int size, int array[size][size])
{
  int i, j;
  for(i = 0; i < size; i++)
  {
    for(j = 0; j < size; j++)
    {
      if (array[i][j] != 0)
      {
        printf("%i ", array[i][j]);
      }
      else
      {
        array[i][j] = 0;
      }
    }
    printf("\n");
  }
}

void FillArray(int size, int array[size][size], int limit)
{
  int i;
  if (limit < 0)
  {
    printf("Invalid size");
  }
  else if (limit == 1)
  {
    for (i = 0; i < size; i++)
    {
      array[i][0] = 1;
    }
  }
  else if (limit >= 2)
  {
    for (i = (size - 1); i >= (limit - 1); i--)
    {
      array[i][limit - 1] = limit;
    }
    FillArray(size, array, limit - 1);
  }
}

int main()
{
  int SIZE;
  int valid = 1;
  while (valid)
  {
    printf("Please input an array size between 0 and 100: ");
    if (!scanf("%i", &SIZE)) 
    { 
      scanf("%*[^\n]");
      printf("That is not a valid input!\n"); 
    }
    else
    {
      if ((SIZE > 100) || (SIZE < 0))
      {
        printf("That is not a valid size\n");
      }
      else
      {
        valid = 0;
      }
    }
  }

  int ARRAY[SIZE][SIZE];
  
  ZeroArray(SIZE, ARRAY);
  FillArray(SIZE, ARRAY, SIZE);
  PrintArray(SIZE, ARRAY);
}
