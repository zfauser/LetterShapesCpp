#include <iostream>
#include <limits>
#include <string>
#include "shapes.h"

using namespace std;

void printSquare(int userNumber, char userLetter)
{
  for (int i = 0; i < userNumber; i++)
  {
    for (int j = 0; j < userNumber; j++)
    {
      cout << userLetter;
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
        cout << userLetter;
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
      cout << userLetter;
    }
    cout << "\n";
  }
}
