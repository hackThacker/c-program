// Created by HackThacker


#include <stdio.h>
#include <string.h>

int main() {
  // Variable declarations
  int myNum =9;               // Integer (whole number)
  float myFloatNum = 9.99;     // Floating point number
  char myLetter = 'H';         // Character

  // Output the values
  printf("%d\n", myNum);       // Print integer
  printf("%f\n", myFloatNum);  // Print float
  printf("%c\n", myLetter);    // Print character




/*

| Data Type   | Size         | Description                                                   | Example   |
| ------------| ------------ | ------------------------------------------------------------- | ----------|
| int         | 2 or 4 bytes | Stores whole numbers without decimals                         | 1         |
| float       | 4 bytes      | Stores fractional numbers (6–7 decimal digits precision)      | 1.99      |
| double      | 8 bytes      | Stores fractional numbers (up to 15 decimal digits precision) | 1.99      |
| char        | 1 byte       | Stores a single character (ASCII)                             | A         |

*/


/*
|    Format Specifier  | Data Type       | Description                       |
| -------------------- | --------------- | --------------------------------- |
| %d or %i             | int             | Prints an integer                 |
| %f or %F             | float           | Prints a floating-point number    |
| %lf                  | double          | Prints a double-precision float   |
| %c                   | char            | Prints a single character         |
| %s                   | char[] / string | Prints a string (character array) |



*/
// Character Data Types
char myText[] = "Hello \n";
printf("%s", myText);


// Numeric Data Types
int my_int_Num = 1000;
printf("Integer: %d\n", my_int_Num);

float my_float_Num = 5.75;
printf("Float: %f\n", my_float_Num);

double my_double_Num = 19.99;
printf("Double: %lf\n", my_double_Num);


// Decimal Precision
float myFloat_Num = 3.5;
double myDoubleNum = 19.99;

printf("%f\n", myFloat_Num);
printf("%lf \n", myDoubleNum);



//The size of Operator

    int myInt;
    float myFloat;
    double myDouble;
    char myChar;

    printf("Size of int: %zu bytes\n", sizeof(myInt));
    printf("Size of float: %zu bytes\n", sizeof(myFloat));
    printf("Size of double: %zu bytes\n", sizeof(myDouble));
    printf("Size of char: %zu bytes\n", sizeof(myChar));



// Type Conversion
int x = 5;
int y = 2;
int sum = x / y;  // This will be 2, not 2.5
printf("Integer division (5 / 2): %d\n", sum);


    // Implicit conversion: int to float
    float my_implic_Float = 9;  // 9 gets promoted to 9.0 automatically
    printf("Implicit conversion (int to float): %f\n", my_implic_Float);

    // Explicit conversion (casting)
    float explicit_sum = (float)x / y;  // (float)5 / 2 = 2.5
    printf("Explicit conversion (float division): %f\n", explicit_sum);





 return 0;
}
