// NOTE: This template is to be used for partner practice ONLY! You must
// use the required Algorithmic Design Document for all Assignments.
/******************************************************************************
# Author:           Liam Campbell
# Lab:              Discussion #1
# Date:             September 27th, 2023
# Description:      This program prompts for a number and prints the number, the number squared, and the number cubed.
# Input:            integer number, integer number
# Output:           integer number, integer number, integer number, integer number
# Sources:          None
#******************************************************************************/
#include <stdio.h>
//constant


int main(void) {
  int userNum;
  int userNumSquared;
  int userNumCubed;
  int userNum2;
  int numbersSummed;
  int numbersProduct;

  printf("Enter a whole number: ");
  scanf("%d", &userNum);

  userNumSquared = userNum * userNum;
  userNumCubed = userNum * userNumSquared;

  printf("Your number is %d.\n", userNum); 
  printf("Your number squared is %d.\n", userNumSquared);
  printf("Your number cubed is %d.\n", userNumCubed);

  printf("Have your friend pick a second number: \n");
  scanf("%d", &userNum2);

  numbersSummed = userNum + userNum2;
  numbersProduct = userNum * userNum2;

  printf("The sum of your numbers is %d. \n", numbersSummed);
  printf("The product of your numbers is %d.\n", numbersProduct);

  return 0;
}