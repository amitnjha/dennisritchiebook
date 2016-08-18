#include <stdio.h>

/* copy input to output replacing string of one or more blanks with a single blankspace*/

void main(){

  int inspace = 0;
  int c;
  while( (c=getchar()) != EOF){
    
    if(c!=' '){
      putchar(c);
      inspace = 0;
    }
    if(c == ' '){
      if(inspace == 0){
	inspace = 1;
	putchar(c);
      }
    }


  }
}
