#include <stdio.h>
#include <unistd.h>

/*
 * Author: Timothy Dacayanan
 * Course: CS 125
 * Assignment: Homework 2 Jet Engine Warmup Sim
 * Date: 1/19/2025
 * */


int main()
{
    float ambient_temp, required_engine_temp, current_engine_temp, fuel_used, time_to_warm;
    int amount_of_fuel;
    
    printf("Ambient temperature = ");
    scanf("%f", &ambient_temp);
    printf("Gallons of fuel before warmup = ");
    scanf("%i", &amount_of_fuel);
    printf("Required engine temp for takeoff = ");
    scanf("%f", &required_engine_temp);
    
    current_engine_temp = ambient_temp + 3;
    
    if ((amount_of_fuel < 0) || (required_engine_temp < 0)) {
        printf("Invalid input, please restart program\n");
    } else {
        while (required_engine_temp > current_engine_temp) {
            printf("Current Engine Temperature = %.2f\n", current_engine_temp);
            if ((required_engine_temp - current_engine_temp) > 1.25) {
                time_to_warm += 1;
                current_engine_temp += 1.25;
                sleep(1);
            } else {
                time_to_warm += ((required_engine_temp - current_engine_temp) / 1.25);
                current_engine_temp += (required_engine_temp - current_engine_temp);
                sleep(((required_engine_temp - current_engine_temp) / 1.25));
            }
        }
        fuel_used = time_to_warm * 2;
        printf("Warmup completed after %.1f seconds. Warmup used %.1f gallons of fuel. Remaining fuel left onboard is %.1f gallons\n", time_to_warm, fuel_used, (amount_of_fuel - fuel_used));
    }
}
