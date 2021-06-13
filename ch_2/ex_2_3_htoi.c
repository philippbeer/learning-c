#include <stdio.h>
#define MAXLINE 1000

int main()
{
  char c;
  int i;
  
  while (i < MAXLINE) {
    c = getchar();

    if(c==EOF)
      break;
    else if (c =='\n')
      break;

    
  }
}
