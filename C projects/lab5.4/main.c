#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void){
  char lancuch[ ]="ALA MA KOTA";
  int i = 0;
  printf("lancuch->%s\n",lancuch);
  while(lancuch[i++]=tolower(lancuch[i-1]));
  printf("lancuch->%s\n",lancuch);
  return 0;
}
