/*
Name: Zach Fauser
Date: February 29th, 2024
Purpose: The purpose of this program is to create a basic program that
implements the fundamentals of programming. This is a program that asks the user
for certain values and outputs a shape of their choice
*/

// TODO: Add comments to main.cpp, shapes.cpp, and inputs.cpp

#include "inputs.h"
#include "shapes.h"
#include <iostream>
#include <limits>
#include <string>

using namespace std;

// Variables that will be used for the inputs in the program

int number = 0;
int shape = 0;
char character = '0';
string stringCharacter = "0";
string stringNumber = "0";
bool playAgain = true;

int main() {
  while (playAgain) {
    number = enterNumber(stringNumber);
    character = enterCharacter(stringCharacter);
    shape = whatShape(shape);
    cout << "\n";
    if (shape == 1) {
      printSquare(number, character);
    } else if (shape == 2) {
      printHollowSquare(number, character);
    } else if (shape == 3) {
      printRightTriangle(number, character);
    } else if (shape == 4) {
      printIsoscelesTriangle(number, character);
    }
    cout << "\n";
    playAgain = askPlayAgain(playAgain);
  }
}
