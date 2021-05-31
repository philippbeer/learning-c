#include <stdio.h>

/* count tabs, blanks and new lines in input */
int main()
{
  int c, nl;
  
  nl = 0;
  while ((c = getchar()) != EOF)
    if (c == '\t' || c == ' ' || c == '\n')
      ++nl;
  printf("%d\n", nl);
}
