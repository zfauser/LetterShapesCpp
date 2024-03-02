/*
Name: Zach Fauser
Date: March 1st, 2024
Purpose: The purpose of this file is to define the functions that will be used to handle the user's inputs
*/

#include <iostream>
#include <limits>
#include <string>

// Include the inputs.h file so that the functions can be used in the main.cpp file
#include "inputs.h"

// Include the colors.h file so that the colors can be used in this program
#include "colors.h"

using namespace std;

bool invalidCharacterFound(string inputNumber)
/*
  Args:
    inputNumber (string): The number that the user has inputted as a string
  Returns:
    bool: Returns true if the inputNumber contains an invalid character, and false if it does not
*/
{
  // For the length of the inputNumber, make sure each character is a number
  for (int i = 0; i < inputNumber.length(); i++)
  {
    if (!isdigit(inputNumber[i]))
    {
      return true;
    }
  }
  return false;
}

int enterNumber()
/*
  Returns:
    outputNumber (int): Returns the inputNumber (string) variable as an integer, after it have been error trapped
*/
{
  string inputNumber = "0";
  // Ask the user to input a number
  cout << GREEN << "End a number: " << RESET;
  cin >> inputNumber;

  // While the input is invalid, ask the user to input a number again
  while (cin.fail() || invalidCharacterFound(inputNumber) || stoi(inputNumber) <= 0)
  {
    cin.clear();
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    cout << BOLD << RED << "Invalid input. Please enter a positive integer: " << RESET;
    cin >> inputNumber;
  }
  // Convert the inputNumber to an integer
  int outputNumber = stoi(inputNumber);
  return outputNumber;
}

char enterCharacter()
/*
  Returns:
    outputLetter (char): Returns the inputLetter (string) variable as a character, after it have been error trapped
*/
{
  string inputLetter = "0";
  // Ask the user to input a character
  cout << GREEN << "Enter a character: " << RESET;
  cin >> inputLetter;

  // While the input is invalid, ask the user to input a character again
  while ((cin.fail()) || (inputLetter.length() != 1))
  {
    cin.clear();
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    // If the input is not a single character, ask the user to only enter one character
    if (inputLetter.length() != 1)
    {
      cout << BOLD << RED << "Invalid input. Please only enter one character: " << RESET;
    }
    // Otherwise, ask the user to enter a different character
    else
    {
      cout << BOLD << RED << "Invalid input. Please enter a different character: " << RESET;
    }
    cin >> inputLetter;
  }
  // Convert the inputLetter to a character
  char outputLetter = inputLetter[0];
  return outputLetter;
}

int whatShape()
/*
  Returns:
    outputShape (int): Returns inputShape (string) variable as an integer after it has been error trapped
*/
{
  string inputShape = "0";
  // Ask the user to input a number for the shape they want
  cout << GREEN << "What shape would you like to print? \n1. Square \n2. Hollow Square "
                   "\n3. Right Angle Triangle\n4. Isosceles Triangle\nPlease enter a number: "
       << RESET;
  cin >> inputShape;
  // While the input is invalid, ask the user to input a number again
  while (cin.fail() || invalidCharacterFound(inputShape) || stoi(inputShape) < 1 || stoi(inputShape) > 4)
  {
    cin.clear();
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    cout << BOLD << RED << "Invalid input. Please enter a number between 1 and 4: " << RESET;
    cin >> inputShape;
  }
  // Convert the inputShape to an integer
  int outputShape = stoi(inputShape);
  return outputShape;
}

bool askPlayAgain()
/*
  Returns:
    inputPlayAgain (bool): Returns true if the user wants to play again, and false if they do not
*/
{
  bool inputPlayAgain;
  string userAnswer;
  // Ask the user if they want to play again
  cout << GREEN << "Would you like to play again? (Y or N): " << RESET;
  cin >> userAnswer;
  // While the input is invalid, ask the user to input a different answer
  while (userAnswer != "Y" && userAnswer != "N" && userAnswer != "y" && userAnswer != "n")
  {
    cout << BOLD << RED << "Invalid input. Please enter Y or N: " << RESET;
    cin >> userAnswer;
  }
  // If the user wants to play again, set inputPlayAgain to true, otherwise set it to false
  if (userAnswer == "Y" || userAnswer == "y")
  {
    inputPlayAgain = true;
  }
  else
  {
    inputPlayAgain = false;
  }
  return inputPlayAgain;
}