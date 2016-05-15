#include <stdio.h>

//program to replace tab with \t backspace with \b and backslash with \\

int main(){

  int c;
  while ( (c = getchar()) != EOF)
    {
      if(c=='\b')
	printf("\\b");
      else if(c=='\t')
	printf("\\t");
      else if(c=='\\')
        printf("\\");
      else
        putchar(c);
   }
  return 0;
}
