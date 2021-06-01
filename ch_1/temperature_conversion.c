#include <stdio.h>

float f2c(float fahrenheit);
float c2f(float celsius);
/* print Fahrenheit-Celsius table
 for fahr = 0, 20, ..., 300 */
int main()
{
  float fahr, celsius;
  int lower, upper, step;

  lower = -40;    /* lower limit of temperature table */
  upper = 300;  /* upper limit */
  step = 20;    /* step size */

  fahr = lower;
  printf("Fahrenheit -> Celsius\n\n");
  printf("Fahrenheit\tCelsius\n");
  while (fahr <= upper) {
    celsius = f2c(fahr);
    printf("%3.0f\t\t%6.1f\n", fahr, celsius);
    fahr = fahr + step;
  }

  // Converting Celsius to Fahrenheit
  celsius = lower;
  printf("Celsius -> Fahrenheit\n\n");
  printf("Celsius\tFahrenheit\n");
  while (celsius <= upper) {
    fahr = c2f(celsius);
    printf("%3.0f\t%6.1f\n", celsius, fahr);
    celsius = celsius + step;
  }
}

/* convert Fahrenheit to celsius */
float f2c(float fahrenheit)
{
  float celsius;

  celsius = 0;
  celsius = (5.0/9.0) * (fahrenheit - 32);
  
  return celsius;
}

float c2f(float celsius)
{
  float fahrenheit;

  fahrenheit = .0;

  fahrenheit = celsius * (9./5.) + 32;

  return fahrenheit;
}
