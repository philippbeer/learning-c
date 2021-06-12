#include <stdio.h>
#define MAXLINE 1000

int main()
{
  int lim = 20;
  int i = 0;
  char c = '\0';
  char s[MAXLINE];
  
  while (i < (lim-1))
    {
      c = getchar();

      if(c ==EOF)
	break;
      else if (c =='\n')
	break;

      s[i++] = c;
    }
  s[i] ='\0'; /* termination of the string */
  
  printf("%s", s);

  return 0;
}
