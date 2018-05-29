/*Zadanie 1*/
#include <stdio.h>
#include <stdarg.h>
#include <string.h>
void va_cat(char *s,int ile, ...);

int main()
{
	char CP[40]="\0";
	char A[]="glodny ";
	char B[]="jestem";
	char C[]=" HALOOOO";
	va_cat(CP,3,A,B,C);


	return 0;
}

void va_cat(char *s,int ile, ...)
{
    int i;
    va_list wyrazy;
    va_start(wyrazy,ile);
    for(i=0;i<ile;i++)
    {
        strcat(s,va_arg(wyrazy,char*));
        	printf("%s\n",s);
    }
    	va_end(wyrazy);
}
