#include <stdio.h>

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
    celsius = (5.0/9.0) * (fahr-32);
    printf("%3.0f\t\t%6.1f\n", fahr, celsius);
    fahr = fahr + step;
  }

  // Converting Celsius to Fahrenheit
  celsius = lower;
  printf("Celsius -> Fahrenheit\n\n");
  printf("Celsius\tFahrenheit\n");
  while (celsius <= upper) {
    fahr = celsius * (9.0/5.0) + 32;
    printf("%3.0f\t%6.1f\n", celsius, fahr);
    celsius = celsius + step;
  }
}
