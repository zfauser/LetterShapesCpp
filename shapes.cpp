#include <iostream>
#include <limits>
#include <string>
#include "shapes.h"

using namespace std;

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
