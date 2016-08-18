#include <stdio.h>

main(){

  int nb, nt, nl ;
  nb = nt = nl = 0;
  int c;
  while( (c=getchar()) != EOF){
    if (c == ' ')
      nb++;
    if (c == '\t')
      nt++;
    if (c == '\n')
      nl++;
  }
  printf("%d\t%d\t%d",nb,nt,nl);
}
