#include <iostream>
#include <limits>
#include <string>
#include "shapes.h"
#include "colors.h"

using namespace std;

bool isEven(int userNumber)
{
  if (userNumber % 2 == 0)
  {
    return true;
  }
  else
  {
    return false;
  }
}

void printSquare(int userNumber, char userLetter)
{
  for (int i = 0; i < userNumber; i++)
  {
    for (int j = 0; j < userNumber; j++)
    {
      cout << MAGENTA << userLetter << RESET;
    }
    cout << "\n";
  }
}

void printHollowSquare(int userNumber, char userLetter)
{
  for (int i = 0; i < userNumber; i++)
  {
    for (int j = 0; j < userNumber; j++)
    {
      // Outputs the user's letter for the Top, Bottom, and the Sides of the box, if it is none of those, output nothing
      if (j == 0 || j == userNumber - 1 || i == 0 || i == userNumber - 1)
      {
        cout << CYAN << userLetter << RESET;
      }
      else
      {
        cout << " ";
      }
    }
    cout << "\n";
  }
}

void printRightTriangle(int userNumber, char userLetter)
{
  for (int i = 0; i < userNumber; i++)
  {
    for (int j = 0; j <= i; j++)
    {
      cout << YELLOW << userLetter << RESET;
    }
    cout << "\n";
  }
}

void printIsoscelesTriangle(int userNumber, char userLetter)
{
  for (int i = 0; i < userNumber; i += 2)
  {
    for (int j = 0; j < (userNumber - i) / 2; j++)
    {
      cout << " ";
    }
    if (isEven(userNumber))
    {
      for (int k = 0; k <= i + 1; k++)
      {
        cout << BLUE << userLetter << RESET;
      }
    }
    else
    {
      for (int k = 0; k <= i; k++)
      {
        cout << BLUE << userLetter << RESET;
      }
    }
    cout << "\n";
  }
}