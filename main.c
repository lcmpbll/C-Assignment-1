
/******************************************************************************
# Author:           Liam Campbell
# Lab:              Assignment #1
# Date:             September 30th, 2023
# Description:      This program prompts the user for the number of small and large pizzas they would like and prints out their totals.
# Input:            integer number, integer number
# Output:           integer number, integer number
# Sources:          None
#******************************************************************************/
#include <stdio.h>
//constant


int main(void) {
  int numberOfSmallPizzas;
  int numberOfLargePizzas;
  int totalNumberOfPizzas;
  int totalCost;

  //Welcome
  printf("Welcome to my online pizza ordering system!\n");
  
  // Small pizza order
  printf("How many small pizzas would you like?\n");
  scanf("%d", &numberOfSmallPizzas);
  
  // Large pizza order
  printf("How many large pizzas would you like?\n"); 
  scanf("%d", &numberOfLargePizzas);
  
  // Caluclate order totals
  totalNumberOfPizzas = numberOfLargePizzas + numberOfSmallPizzas;

  totalCost = numberOfSmallPizzas * 5 + numberOfLargePizzas * 9;

  // Confirm order
  printf("You ordered %d pizzas.\n", totalNumberOfPizzas);
  printf("Your total is $%d.\n", totalCost);

  //Thanks

  printf("Thank you for using my program!\n");

  return 0;
}