/*
 * Author: Timothy Dacayanan
 * Course: CS 125
 * Assignment: 
 * Date: //2025
 * 
*/

#include <stdio.h>

void MatrixAddition(int rows, int cols, int mat1[rows][cols], int mat2[rows][cols])
{
  int newmat[rows][cols];
  
  int i, j;
  for (i = 0; i < rows; i++)
  {
    for (j = 0; j < cols; j++)
    {
      newmat[i][j] = (mat1[i][j] + mat2[i][j]);
    }
  }
  
  for (i = 0; i < rows; i++)
  {
    for (j = 0; j < cols; j++)
    {
      printf("%i ", newmat[i][j]);
    }
    printf("\n");
  }
}

int main()
{
  int Rows = 4;
  int Cols = 4;
  
  int matrix1[4][4] = {{5, 8, 4, 9}, {1, 0, 0, 2}, {8, 0, 9, 8}, {7, 1, 0, 4}};
  int matrix2[4][4] = {{5, 8, 0, 6}, {5, 0, 7, 8}, {9, 4, 8, 7}, {5, 1, 9, 9}};

  MatrixAddition(Rows, Cols, matrix1, matrix2);
  
}
