/*
Name: Zach Fauser
Date: February 29th, 2024
Purpose: The purpose of this program is to create a basic program that
implements the fundamentals of programming. This is a program that asks the user
for certain values and outputs a shape of their choice
*/

#include <iostream>
#include <limits>
#include <string>

// These files are define the functions that will be used in the program, please
// see shapes.cpp and inputs.cpp for the code of the functions used in this
// program.
#include "inputs.h"
#include "shapes.h"

using namespace std;

// Variables that will be used for the inputs in the program
int number = 0;
int shape = 0;
char character = '0';
bool playAgain = true;

// This is the main function of the program. It calls the various other
// functions needed for the program to run.
int main() {
  // The code will continue to run until the user decides to stop playing the
  // game.
  while (playAgain) {
    // Have the user enter the values for the shape they want to print.
    number = enterNumber();
    character = enterCharacter();
    shape = whatShape();
    cout << "\n";

    // Print the shape that the user has chosen.
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

    // Ask the user if they want to play again.
    playAgain = askPlayAgain();
  }
}
