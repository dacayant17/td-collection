/*
 * Author: Timothy Dacayanan
 * Course: CS 125
 * Assignment: Homework 4: Autopilot Sim Game
 * Date: 2/2/2025 
*/


#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>

int Take_User_Input()
{
  int out;
  int valid = 1;
  while (valid)
  {
    if (!scanf("%i", &out)) 
    { 
        scanf("%*[^\n]");
        printf("That is not a valid input!\n"); 
    }
    else
    {
      if ((out < 0) || (out > 1))
      {
          printf("That is not a valid input!\n");
      }
      else
      {
          valid = 0;
      }
    }
  }
  return out;

}

int main()
{
  int error_margin = 5;
  int elevation = 38000;
  int action, distance, auto_status, seconds_to_dest, game_status, change;
  
  game_status = 1;
  
  srand(time(NULL));
  
  while (game_status)
  {
    seconds_to_dest = 10;
    distance = ((rand() % 20) + 50);
    
    printf("Welcome to your Flight Simulation!\n");
    printf("Current Status:\n");
    printf("Seconds to destination: %i\n", seconds_to_dest);
    printf("Distance from flight path: %i\n\n", distance);
    
    while (seconds_to_dest > 0)
    {
      change = ((rand() % 25) + 1);
      printf("Do you want to keep autopilot on(1) or off(0)?\n");
      auto_status = Take_User_Input();
      
      if (auto_status == 1)
      {
        distance = (distance > 0) ? (distance + change) : (distance - change);
      } 
      else
      {
        distance = (distance > 0) ? (distance - change) : (distance + change);
      }
      sleep(1);
      
      printf("Current Status:\n");
      printf("Seconds to destination: %i\n", --seconds_to_dest);
      printf("Distance from flight path: %i\n\n", distance);
      
    }
    
    if ((distance < error_margin) && (distance > (-1 * error_margin)))
    {
      printf("Success! You have accurately flown to your destination.\n\n");
    }
    else
    {
      printf("Failure! ");
      printf("You have not remained close enough to your flight path.\n\n");
    }
    
    printf("Do you want to play again(1) or quit(0)?\n");
    game_status = Take_User_Input();
  }
  
  printf("Thanks for playing!!\n");
  
}
