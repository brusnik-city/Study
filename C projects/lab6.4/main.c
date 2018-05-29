/* Zadanie 4*/

#include <math.h>
#include <stdio.h>
#include <string.h>
int main(){
char pi_form[6]="";
int i;
for (i=0; i<7;i=i+2)
    {
	sprintf(pi_form, "%%.%dlf",i);
	printf("FORMAT %s->",pi_form);
	strcat(pi_form,"\n");
	printf(pi_form,M_PI); //M_PI stała z biblioteki math.h
}
return 0;
}
