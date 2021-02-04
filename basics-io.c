#include <stdio.h>

int main()
{
  printf("Hello World\n");

  int x = 50;
  int y; // declaration
  y = 42; // initialization

  printf("%s World\n", "Hello");
  printf("X: %d, Y: %d\n", x, y);
  printf("The value of x + y is %d\n", x+y);

  int radius;
  printf("Give me a radius: ");
  scanf("%d", &radius); // address-of-operator (pointer)
  printf("You chose the value %d\n", radius);


  char name[10]; // char array of 20 characters. '\0' takes one spot
  printf("Give me your name: ");
  scanf("%9s", name);
  printf("Your name: %s\n", name);
  return 0;
}
