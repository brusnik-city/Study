
#include <stdio.h>
#include <ctype.h>

char * Slowa_Na_Duze (char* tekst ) {
char*wsk =tekst;

if(wsk==NULL  )         //jeœli pusty
    return(tekst);
tekst[0] = toupper(tekst[0]);
while (*(++wsk) !='\0')
 if(*(wsk-1) == ' '  )  //jeœli pocz¹tek wyrazu zamieñ na du¿¹
 tekst[wsk-tekst] = toupper(*(wsk));
 return( tekst );
}

int main(void ) {

char lancuch[100] = "to  jest      probka  tekstu    ";
   printf( "%s\n" , Slowa_Na_Duze( lancuch ) );
        return 0;
}
