#include <stdio.h>

#define IN 1 /* inside a word */
#define OUT 0 /* outside a word */
#define MAXWORDLENGTH 10 /* max word length */

int main(){
  int i, j, c, nc, max_count, state;
  int nlength[MAXWORDLENGTH]; // max. length considered 

  state = OUT;
  nc = max_count = 0;
  while((c = getchar()) != EOF) {
    if (c == ' ' || c == '\n' || c == '\t') {
      state = OUT;
      if (nc > 0) {
	// remember largest value
	if (nc > max_count)
	  max_count = nc;
	
	if (nc > MAXWORDLENGTH)
	  nc = MAXWORDLENGTH;
	nlength[nc-1] = ++nlength[nc-1];
	nc = 0; // reseting word character count
      }
    }
    else {
      state = IN;
      ++nc;
    }
  }
  printf("Max count: %d", max_count);
  
  for (i = max_count; i >= 1; --i) {
    for (j = 0; j < MAXWORDLENGTH-1; ++j)
      if (nlength[j] >= i)
	printf("-\t");
      else
	printf(" \t");
    printf("\n");
  }
  for (i = 1; i <= MAXWORDLENGTH; ++i)
    printf("%d\t", i);
}
