#include <stdio.h>
#define MAXLINE 1000 /*max input line length*/

int getlines(char line[], int maxline);
void copy(char to[], char from[]);

/*print the longest input line*/

int main()
{
	int len; /*current line length*/
	int max; /* maximum length seen so far*/
	char line[MAXLINE];
	char longest[MAXLINE];
	
	max = 0 ;
	while ((len = getlines(line, MAXLINE)) > 0)
		if(len > max){
			max = len;
			copy(longest, line);
		}
	if (max > 0) /*there was a line */
		printf("%s", longest);
	return 0;
	
}

/* read a line into s, return length*/
int getlines(char s[], int lim){
	int c, i;
	for ( i = 0; i < lim -1 && (c=getchar()) != EOF && c!='\n'; ++i)
		s[i] = c;
	if(c=='\n'){
		s[i] = c;
		++i;
	}
	s[i] = '\0';
	return i;
}

void copy(char to[], char from[]){
	int i;
	while((to[i] = from[i]) != '\0')
		++i;
}