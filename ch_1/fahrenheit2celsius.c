#include <stdio.h>

/* print Fahrenheit-Celsius table
 for fahr = 0, 20, ..., 300 */
int main()
{
  int fahr, celsius;
  int lower, upper, step;

  lower = -41;    /* lower limit of temperature table */
  upper = 300;  /* upper limit */
  step = 20;    /* step size */

  fahr = lower;
  printf("Fahrenheit -> Celsius\n\n");
  printf("Fahrenheit\tCelsius\n");
  while (fahr <= upper) {
    celsius = 5 * (fahr-32) / 9;
    printf("%d\t\t%d\n", fahr, celsius);
    fahr = fahr + step;
  }

  // Converting Celsius to Fahrenheit
  celsius = lower;
  printf("Celsius -> Fahrenheit\n\n");
  printf("Celsius\tFahrenheit\n");
  while (celsius <= upper) {
    fahr = celsius * 9/5 + 32;
    printf("%d\t%d\n", celsius, fahr);
    celsius = celsius + step;
  }
}
