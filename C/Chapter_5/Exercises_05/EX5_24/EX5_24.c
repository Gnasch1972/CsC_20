//-----------------------------------------------------------------------------
// Program: EX5_24.c - Temperature Conversion
// Programmer: Joseph Cunningham
// Class: CsC_20 - c
// Date: 2/17/19
//
// This program prints a chart showing Fahrenheit equivalents of Celcius temps
// from 0-100 and Celcius equivalents of Fahrenheit temps from 32 - 212 degrees.
//-----------------------------------------------------------------------------

#include<stdio.h>

// Function prototypes

int fahrenheit(int celciusTemp);
int celcius (int fahrenheitTemp);

int main(void)
{
  // Varible declaration
  
  int temp;

  // Celcius -> Fahrenheit chart
  
  printf("Fahrenheit Equivalents");
  printf("\nCelcius\t\tFahrenheit\n");

  for(temp = 0; temp <= 100; temp++)
  {
    printf("%d\t\t%d\n", temp, fahrenheit(temp));
  }

  // Fahrenheit -> Celcius
  
  printf("\nCelcius Equivalents\n");
  printf("Fahrenheit\tCelcius\n");

  for(temp = 32; temp <= 212; temp++)
  {
    printf("%d\t\t%d\n", temp, celcius(temp));
  }

  return 0;
}

//-----------------------------------------------------------------------------
// Function: fahrenheit(celcius) converts celcius temps to fahrenheit
// Input: int celcius - a int representing the temp in celcius
// Output; none
// Return: an int representing the temp in fahrenheit
//-----------------------------------------------------------------------------

int fahrenheit(int temp)
{
  return (int)(9.0/5.0 * temp + 32.0);
}

//-----------------------------------------------------------------------------
// Function: celcius(fahrenheit) converts fahrenheit temps to celcius
// Input: int fahrenheit - a int representing the temp in fahrenheit
// Output: none
// Return: an int representing the temp in celcius
//-----------------------------------------------------------------------------

int celcius(int temp)
{
  return (int) (5.0/9.0 *( temp - 32.0));
}
