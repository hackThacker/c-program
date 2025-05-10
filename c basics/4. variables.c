// Created by HackThacker

#include <stdio.h>

int main() {

/*
int - stores integers (whole numbers), without decimals, such as 123 or -123
float - stores floating point numbers, with decimals, such as 19.99 or -19.99
char - stores single characters, such as 'a' or 'B'. Characters are surrounded by single quotes
*/

// Declaring (Creating) Variables
int hackthacker = 15;

//Format Specifiers
int myNum = 15;            // Integer (whole number)
float myFloatNum = 5.99;   // Floating point number
char myLetter = 'D';       // Character

// Print variables
printf("%d\n", myNum);
printf("%f\n", myFloatNum);
printf("%c\n", myLetter);

// Change Variable Values
int myNewNum = 15;
int myOtherNum = 23; // Assign the value of myOtherNum (23) to myNum
myNewNum = myOtherNum; // myNewNum is now 23, instead of 15
printf("%d\n", myNewNum);

// Declare Multiple Variables
int x = 5, y = 6, z = 50;
printf("%d\n", x + y + z);

// C Variable Names
int minutesPerHour = 60; // Good variable name
int m = 60; // OK, but not so easy to understand what m actually is

/*
The general rules for naming variables are:

Names can contain letters, digits and underscores
Names must begin with a letter or an underscore (_)
Names are case-sensitive (myVar and myvar are different variables)
Names cannot contain whitespaces or special characters like !, #, %, etc.
Reserved words (such as int) cannot be used as names
*/

return 0;
}
