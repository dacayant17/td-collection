#include <stdio.h>

/*
 * Author: Timothy Dacayanan
 * Course: CS 125
 * Assignment: In Class Exercise: Ternary not Binary Shuffle
 * Date: 1/22/2025
 * */

int main()
{
    int i;
    float mynums[] = {0, 0, 0};
    
    for (i = 0; i < 3; i++)
    {
        printf("Please input number %i: ", i + 1);
        scanf("%f", &mynums[i]);
    }
    
    char* soap = ((mynums[0] + mynums[1] + mynums[2]) >= 12.11) ? "Mission Failed" : "Mission Passed";
    
    printf("%s\n", soap);
}
