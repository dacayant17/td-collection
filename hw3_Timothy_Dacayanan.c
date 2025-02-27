/*
Author: Timothy Dacayanan
Course: CS 125
Assignment: Homework 3: Hours Worked Calculator
Date: 1/26/2025
*/

#include <stdio.h>

int manager_flag;

float Hours_Worked()
{
  float hours;
    int valid = 1;
    while (valid)
    {
      printf("Please input the number of hours worked: ");
      if (!scanf("%f", &hours))
      {
            scanf("%*[^\n]");
            printf("That is not a valid input!\n");
        }
        else
        {
            if (hours < 0)
            {
              printf("That is not a valid input!\n");
            }
            else if (hours > 60)
            {
              printf("You must talk to your manager to work more than 60 hours.\n");
              printf("Your hours worked will be defaulted to 60.\n");
              manager_flag = (hours > 60) ? 1 : 0;
              hours = 60;
              valid = 0;
            }
            else
            {
              valid = 0;
            }
        }
    }
    return hours;
}


int Employee_ID()
{
  int id;
    int valid = 1;
    while (valid)
    {
        printf("Please input your employee ID: ");
        if (!scanf("%i", &id))
        {
            scanf("%*[^\n]");
            printf("That is not a valid input!\n");
        }
        else
        {
            if ((id < 1000) || (id > 1000000))
            {
                printf("That is not a valid input!\n");
            }
            else
            {
                valid = 0;
            }
        }
    }
    return id;
}


float Hourly_Rate()
{
  float rate;
  int valid = 1;
  while (valid)
  {
    printf("Please input your hourly rate: ");
    if (!scanf("%f", &rate))
    {
      scanf("%*[^\n]");
      printf("That is not a valid input!\n");
    }
    else
    {
      if ((rate <= 0) || (rate > 100))
      {
        printf("That is not a valid input!\n");
      }
      else
      {
        valid = 0;
      }
    }
  }
  return rate;
}


int Employee_Type()
{
  int type;
    int valid = 1;
    while (valid)
    {
        printf("Please input your employee type(Hourly(1) or Salary(2)): ");
        if (!scanf("%i", &type))
        {
            scanf("%*[^\n]");
            printf("That is not a valid input!\n");
        }
        else
        {
          if ((type < 1) || (type > 2))
          {
            printf("That is not a valid input!\n");
          }
          else
          {
              valid = 0;
          }
        }
    }
    return type;
}


void Summary(float hours, int id, float rate, int type)
{
    printf("Greetings! Here is the information you entered!\n");
    printf("Summary:\n");
  printf("Employee ID: %i\n", id);
  printf("Hours Worked: %.2f\n", hours);
  printf("Hourly Rate: %.2f\n", rate);
  if (type == 1)
  {
    printf("Employee Type: Hourly\n");
  }
  else
  {
    printf("Employee Type: Salary\n");
  }
  printf("Speak to Manager: ");
  (manager_flag) ? printf("Yes\n") : printf("No\n");
}


int main()
{
    float hours_worked = Hours_Worked();
    int employee_id = Employee_ID();
    float hourly_rate = Hourly_Rate();
    int employee_type = Employee_Type();
    int valid, query_option, change_option;
    float current_pay;
   
    Summary(hours_worked, employee_id, hourly_rate, employee_type);
 
  while (query_option != 5)
  {
      printf("Possible Queries:\n");
      printf("Request current pay(1)\n");
      printf("Change an input(2)\n");
      printf("Check if you need to speak to your manager(3)\n");
      printf("See summary again(4)\n");
      printf("Quit(5)\n");
      printf("Please input the query you would like: ");
      if (!scanf("%i", &query_option))
      {
          scanf("%*[^\n]");
          printf("That is not a valid input!\n");
      }
      else
      {
          switch (query_option)
          {
          case (1):
            valid = 1;
            change_option = 0;
              while (valid)
              {
                printf("Would you like to view in whole(1) or exact(2)?\n");
                if (!scanf("%i", &change_option))
                {
                  scanf("%*[^\n]");
                  printf("That is not a valid input!\n");
                }
                else
                {
                  if ((change_option < 1) || (change_option > 2))
                  {
                    printf("That is not a valid input!\n");
                  }
                  else
                  {
                    valid = 0;
                  }
                }
              }
             
              switch (employee_type)
              {
                case (1):
                  current_pay = hourly_rate * hours_worked;
                  break;
              case (2):
                if (hours_worked >= 40)
                {
                  current_pay = hourly_rate * 40;
                }
                else
                {
                  current_pay = hourly_rate * hours_worked;
                }
                break;
              }
             
              switch (change_option)
              {
                case (1):
                  printf("Your current pay is $%i\n", (int) current_pay);
                  break;
                case(2):
                  printf("Your current pay is $%.2f\n", current_pay);
                  break;
              }
              if (manager_flag)
              {
                printf("Don't forget to speak to your manager!\n");
              }
              break;
            case (2):
              valid = 1;
              while (valid)
              {
                printf("What input would you like to change?\n");
                printf("Hours worked(1)\n");
                printf("Hourly Rate(2)\n");
                printf("Employee Type(3)\n");
                printf("Input: ");
                if (!scanf("%i", &change_option))
                {
                  scanf("%*[^\n]");
                  printf("That is not a valid input!\n");
                }
                else
                {
                  if ((change_option < 1) || (change_option > 3))
                  {
                    printf("That is not a valid input!\n");
                  }
                  else
                  { valid = 0;
                  }
                }
              }
              switch (change_option)
              {
                case (1):
                  hours_worked = Hours_Worked();
                  manager_flag = (hours_worked > 60) ? 1 : 0;
                  break;
                case (2):
                  hourly_rate = Hourly_Rate();
                  break;
                case (3):
                  employee_type = Employee_Type();
                  break;
              }
             
              if (manager_flag)
              {
                printf("Don't forget to speak to your manager!\n");
              }
              break;
        case (3):
          printf("Speak to Manager: ");
          (manager_flag) ? printf("Yes\n") : printf("No\n");
          break;
          case (4):
            Summary(hours_worked, employee_id, hourly_rate, employee_type);
              {
                printf("Don't forget to speak to your manager!\n");
              }
            break;
          case (5):
            break;
            default:
              printf("That is not a vaild query\n");
            }
        }
  }
  printf("Query Ended\n");
}

