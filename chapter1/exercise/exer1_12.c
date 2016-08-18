/* write a program which prints its input one word per line*/
/* to be done*/
#include <stdio.h>

int main(){
char c;
int inspace =0;
while((c=getchar()) != EOF){
	if(c == ' ' || c == '\t' || c == '\n'){
	  if(inspace == 0){
		inspace = 1;
		putchar('\n');
	  }
	}else{
		inspace = 0;
		putchar(c);
	}
}

return 0;

}
