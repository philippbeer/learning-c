#include <stdio.h>

/* count digits, white space, others */
int main() {
  int c, i, nwhite, nother;
  int ndigit[10];

  nother = nwhite = 0;
  for (i = 0; i < 10; ++i)
    ndigit[i] = 0;

  while ((c = getchar()) != EOF)
    if ( c >=  '0' && c <= '9')
      /* expression c- '0' works to address array index b/c 0-9
       have increasing values in all characters sets */
      ++ndigit[c-'0'];
    else if (c == ' ' || c == '\n' || c == '\t')
      ++nwhite;
    else
      ++nother;

  printf("digits =");
  for (i = 0; i < 10; ++i)
    printf(" %d", ndigit[i]);
  printf(", white space = %d, other = %d\n",
	 nwhite, nother); 
}
