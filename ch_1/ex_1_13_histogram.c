#include <stdio.h>

#define IN 1 /* inside a word */
#define OUT 0 /* outside a word */
#define MAXWORDLENGTH 10 /* max word length */

int main(){
  int i, j, c, nc, max_count, state;
  int nlength[MAXWORDLENGTH]; // max. length considered 

  state = OUT;
  nc = max_count = 0;
  for (i = 0; i < MAXWORDLENGTH; ++i)
    nlength[i] = 0;
  
  while((c = getchar()) != EOF) {
    if (c == ' ' || c == '\n' || c == '\t') {
      state = OUT;
      if (nc > 0) {
	if (nc > MAXWORDLENGTH)
	  nc = MAXWORDLENGTH;
	nlength[nc-1] = ++nlength[nc-1];
	
	// keep track of largest count
	if (nlength[nc-1] > max_count)
	  max_count = nlength[nc-1];
	nc = 0; // reseting word character count
      }
    }
    else {
      state = IN;
      ++nc;
    }
  }
  printf("Max count: %d\n", max_count);
  for (i = 0; i < MAXWORDLENGTH; ++i)
    printf("%d = %d\n", i+1, nlength[i]);
  
  for (i = max_count; i > 0; --i) {
    for (j = 0; j < MAXWORDLENGTH; ++j)
      if (nlength[j] >= i)
	printf("- ");
      else
	printf("  ");
    printf("\n");
  }
  for (i = 1; i <= MAXWORDLENGTH; ++i)
    printf("%d ", i);
}
