#include <stdio.h>
#define MAXLINE 1000 /* maximum input line length */

int get_line(char line[], int maxline);
void reverse_line(char rev[], char from[]);

 /* print the longest input line */
int  main()
 {
   int len; /* current line length */
   char line[MAXLINE]; /* current input line */
   char reverse[MAXLINE]; /* reverse line */
   
   while ((len = get_line(line, MAXLINE)) > 0) {
     reverse_line(reverse, line);
     printf("%s\n", reverse);
   }
   return 0;
 }


 /* getline: read a line into s, return length */
 int get_line(char s[],int lim)
 {
   int c, i;
   for (i=0; i < lim-1 && (c=getchar())!=EOF && c!='\n'; ++i)
     s[i] = c;
   if (c == '\n') {
     s[i] = c;
     ++i;
   }
   s[i] = '\0';
   return i;
 }

/* reverse order of characters in array */
void reverse_line(char reverse[], char from[])
{
  int i, j;
  i = j = 0;
  /* find index value for end of string */
  while (from[i] != '\0') {
    ++i;
  }
 
  for (i; i  >= 0; i--) {
    if (from[i] == '\n' || from[i] == '\0') {
     }
    else {
      reverse[j] = from[i];
      ++j;
    }
  }
  reverse[j] = '\0';
}
