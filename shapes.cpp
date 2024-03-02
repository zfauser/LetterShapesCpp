/*
Name: Zach Fauser
Date: March 1st, 2024
Purpose: The purpose of this file is to define the functions that will be used to display the different shapes
*/

#include <iostream>
#include <limits>
#include <string>

// Include the shapes.h file so that the functions can be used in the main.cpp file
#include "shapes.h"

// Include the colors.h file so that the colors can be used in this program
#include "colors.h"

using namespace std;

bool isEven(int userNumber)
/*
  Args:
    userNumber (int): The number that the user has inputted
  Returns:
    bool: Returns true if the number is even, and false if the number is odd
*/
{
  // If the number has a remainder of 0 when divided by 2, then it is even
  if (userNumber % 2 == 0)
  {
    return true;
  } else {
    return false;
  }
}

void printSquare(int userNumber, char userLetter)
/*
  Args:
    userNumber (int): The number that the user has inputted
    userLetter (char): The character that the user has inputted
  Returns:
    cout: Outputs the square to the console
*/
{
  // For the number of times that the user has inputted, output the user's letter (height)
  for (int i = 0; i < userNumber; i++)
  {
    // For the number of times that the user has inputted, output the user's letter (width)
    for (int j = 0; j < userNumber; j++)
    {
      cout << MAGENTA << userLetter << RESET;
    }
    cout << "\n";
  }
}

void printHollowSquare(int userNumber, char userLetter)
/*
  Args:
    userNumber (int): The number that the user has inputted
    userLetter (char): The character that the user has inputted
  Returns:
    cout: Outputs the hollow square to the console
*/
{
  // For the number of times that the user has inputted, output the user's letter (height)
  for (int i = 0; i < userNumber; i++)
  {
    // For the number of times that the user has inputted, output the user's letter (width)
    for (int j = 0; j < userNumber; j++)
    {
      // Outputs the user's letter for the Top, Bottom, and the Sides of the box
      if (j == 0 || j == userNumber - 1 || i == 0 || i == userNumber - 1)
      {
        cout << CYAN << userLetter << RESET;
      }
      // Outputs a space for the inside of the box
      else
      {
        cout << " ";
      }
    }
    cout << "\n";
  }
}

void printRightTriangle(int userNumber, char userLetter)
/*
  Args:
    userNumber (int): The number that the user has inputted
    userLetter (char): The character that the user has inputted
  Returns:
    cout: Outputs a right angle triangle to the console
*/
{
  // For the number of times that the user has inputted, output the user's letter (height)
  for (int i = 0; i < userNumber; i++)
  {
    // For the the same number of times as the current height being outputted, output the user's letter
    for (int j = 0; j <= i; j++)
    {
      cout << YELLOW << userLetter << RESET;
    }
    cout << "\n";
  }
}

void printIsoscelesTriangle(int userNumber, char userLetter)
/*
  Args:
    userNumber (int): The number that the user has inputted
    userLetter (char): The character that the user has inputted
  Returns:
    cout: Outputs an isosceles triangle to the console
*/
{
  // Outputs the appropriate number of layers for the triangle
  for (int i = 0; i < userNumber; i += 2)
  {
    // Output spaces for the left side of the triangle
    for (int j = 0; j < (userNumber - i) / 2; j++)
    {
      cout << " ";
    }
    // If the base number is even...
    if (isEven(userNumber))
    {
      // Output one extra character for even userNumbers
      for (int k = 0; k <= i + 1; k++)
      {
        cout << BLUE << userLetter << RESET;
      }
    }
    else
    {
      // Output the same number of characters as the current i value
      for (int k = 0; k <= i; k++)
      {
        cout << BLUE << userLetter << RESET;
      }
    }
    cout << "\n";
  }
}