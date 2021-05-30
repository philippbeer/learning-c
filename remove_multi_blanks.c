#include <stdio.h>

/* count tabs, blanks and new lines in input */
int main()
{
  int c;
  int lastchar;
  while ((c = getchar()) != EOF) {
    if ((c == lastchar) && (c = ' '))
      continue;
    putchar(c);
    lastchar = c; //setting last char to current char
  }
}

