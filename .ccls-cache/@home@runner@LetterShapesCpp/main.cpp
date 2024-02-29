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

using namespace std;

// Variables that will be used for the inputs in the program

int number = 0;
int shape = 0;
char character = '0';
string stringCharacter = "0";

// Asks the user to input a letter

char enterCharacter(string inputLetter) {
  cout << "Enter a character: ";
  cin >> inputLetter;
  // While the input the user has put in has failed or is over one character,
  // try again
  while ((cin.fail()) || (inputLetter.length() != 1)) {
    cin.clear();
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    if (inputLetter.length() != 1) {
      cout << "Invalid input. Please only enter one letter: ";
    } else {
      cout << "Invalid input. Please enter a different letter: ";
    }
    cin >> inputLetter;
  }
  cin.clear();
  cin.ignore(numeric_limits<streamsize>::max(), '\n');
  char outputLetter = inputLetter[1];
  return outputLetter;
}

int enterNumber(int inputNumber) {
  cout << "End a number: ";
  cin >> inputNumber;
  while (cin.fail() || inputNumber < 0) {
    cin.clear();
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    cout << "Invalid input. Please enter a positive integer: ";
    cin >> inputNumber;
  }
  return inputNumber;
}

int whatShape(int inputShape) {
  cout << "What shape would you like to print? \n1. Square \n2. Hollow Square "
          "\n3. Right Triangle\n4. Isosceles Triangle\nPlease enter a number: ";
  cin >> inputShape;
  while (cin.fail() || inputShape < 1 || inputShape > 4) {
    cin.clear();
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    cout << "Invalid input. Please enter a number between 1 and 4: ";
    cin >> inputShape;
  }
  return inputShape;
}

void printSquare(int userNumber, char userLetter) {
  for (int i = 0; i < userNumber; i++) {
    for (int j = 0; j < userNumber; j++) {
      cout << userLetter;
    }
    cout << "\n";
  }
}

void printHollowSquare(int userNumber, char userLetter) {
  for (int i = 0; i < userNumber; i++) {
    for (int j = 0; j < userNumber; j++) {
      if (i == 0 || i == userNumber - 1 || j == 0 || j == userNumber - 1) {
        cout << userLetter;
      } else {
        cout << " ";
      }
    }
    cout << "\n";
  }
}

int main() {
  number = enterNumber(number);
  character = enterCharacter(stringCharacter);
  shape = whatShape(shape);
  if (shape == 1) {
    printSquare(number, character);
  } else if (shape == 2) {
    printHollowSquare(number, character);
  } else if (shape == 3) {
  }
}
