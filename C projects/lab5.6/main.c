#include <stdio.h>
#include <stdlib.h>

int  str_n1_cmp( char*str1, char*str2  );

int main()
{
    int i;
    char tekst1[100] = "to jest olo";
    char tekst2[100] = "to jest ala";
    i = str_n1_cmp(tekst1,tekst2);
    printf ("%d",i);
    return 0;
}


int  str_n1_cmp( char*str1, char*str2 )
{ while( *str1 == *str2 )
  { if ( *str1 == '\0' )  return 0;
    str1 = str1 + 1;
    str2 = str2 + 1 ;
  }
  return (*str1 - *str2);
}
