#include "inputs.h"
#include "colors.h"
#include <iostream>
#include <limits>
#include <string>

using namespace std;

bool invalidCharacterFound(string inputNumber) {
  for (int i = 0; i < inputNumber.length(); i++) {
    if (!isdigit(inputNumber[i])) {
      return true;
    }
  }
  return false;
}

int enterNumber(string inputNumber) {
  cout << GREEN << "End a number: " << RESET;
  cin >> inputNumber;
  while (cin.fail() || invalidCharacterFound(inputNumber) ||
         stoi(inputNumber) <= 0) {
    cin.clear();
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    cout << BOLD << RED
         << "Invalid input. Please enter a positive integer: " << RESET;
    cin >> inputNumber;
  }
  int outputNumber = stoi(inputNumber);
  return outputNumber;
}

// Asks the user to input a letter

char enterCharacter(string inputLetter) {
  cout << GREEN << "Enter a character: " << RESET;
  cin >> inputLetter;
  // While the input the user has put in has failed or is over one character,
  // try again
  while ((cin.fail()) || (inputLetter.length() != 1)) {
    cin.clear();
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    if (inputLetter.length() != 1) {
      cout << BOLD << RED
           << "Invalid input. Please only enter one character: " << RESET;
    } else {
      cout << BOLD << RED
           << "Invalid input. Please enter a different character: " << RESET;
    }
    cin >> inputLetter;
  }
  char outputLetter = inputLetter[0];
  return outputLetter;
}

int whatShape(int inputShape) {
  cout << GREEN
       << "What shape would you like to print? \n1. Square \n2. Hollow Square "
          "\n3. Right Angle Triangle\n4. Isosceles Triangle\nPlease enter a "
          "number: "
       << RESET;
  cin >> inputShape;
  while (cin.fail() || inputShape < 1 || inputShape > 4) {
    cin.clear();
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    cout << BOLD << RED
         << "Invalid input. Please enter a number between 1 and 4: " << RESET;
    cin >> inputShape;
  }
  return inputShape;
}

bool askPlayAgain(bool inputPlayAgain) {
  string userAnswer;
  cout << GREEN << "Would you like to play again? (Y or N): " << RESET;
  cin >> userAnswer;
  while (userAnswer != "Y" && userAnswer != "N" && userAnswer != "y" &&
         userAnswer != "n") {
    cout << BOLD << RED << "Invalid input. Please enter Y or N: " << RESET;
    cin >> userAnswer;
  }
  if (userAnswer == "Y" || userAnswer == "y") {
    inputPlayAgain = true;
  } else {
    inputPlayAgain = false;
  }
  return inputPlayAgain;
}