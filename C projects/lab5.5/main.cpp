
#include <stdio.h>
#include <ctype.h>

char * Slowa_Na_Duze (char* tekst ) {
char*wsk =tekst;

if(wsk==NULL  )         //je�li pusty
    return(tekst);
tekst[0] = toupper(tekst[0]);
while (*(++wsk) !='\0')
 if(*(wsk-1) == ' '  )  //je�li pocz�tek wyrazu zamie� na du��
 tekst[wsk-tekst] = toupper(*(wsk));
 return( tekst );
}

int main(void ) {

char lancuch[100] = "to  jest      probka  tekstu    ";
   printf( "%s\n" , Slowa_Na_Duze( lancuch ) );
        return 0;
}
