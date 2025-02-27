#include <stdio.h>

/*
 * Author: Timothy Dacayanan
 * Course: CS 125
 * Assignment: In Class Exercise Switch Case Statements
 * Date: 1/15/2025
*/

int main() 
{ 
	int num; 
	printf("Please enter a number from 1 to 5: "); 
	scanf("%i", &num); 

	switch (num) 
	{ 
		case 1: 
			printf("You chose B747\n"); 
			break; 
		case 2: 
			printf("You chose A320\n"); 
			break; 
		case 3: 
			printf("You chose A321\n"); 
			break; 
		case 4: 
			printf("You chose B747-3\n"); 
			break; 
		case 5: 
			printf("You chose SR71\n"); 
			break; 
	}

	 return 0; 
}

