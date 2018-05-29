#include <stdio.h>

#include <stdlib.h>
#include <string.h>




void print_string_array(char ** strings,size_t strings_len);//wypisywanie tablicy stringów
char * min_string (char ** strings,size_t strings_len); //znajdowanie najmniejszego stringu w tablicy stringów - zwraca wskaŸnik

int main()

{
    char *strings[] = { "Zorro", "Alex", "Celine", "Bill", "Forest", "Dexter"};

	char *wsk_string;

		size_t strings_len = strlen(*strings)+1; //okreslenie d³ugoœci tablicy strings




    print_string_array(strings, strings_len); //wypisanie tablicy



    wsk_string = min_string(strings,strings_len);//znalezienie najmniejszego stringu w tablicy


    printf("%\n%s\n", wsk_string); //wypisanie najmniejszego stringu

	return 0;
}

void print_string_array(char ** strings,size_t strings_len)
{
    int i;
    for(i=0;i<strings_len;i++) printf("%s ",strings[i]);
}

char * min_string (char ** strings,size_t strings_len)
{
    int i;
    char *min;
    min= *strings;
    for(i=0;i<strings_len;i++)
    {
        if(strcmp(min,*(strings+i))>0)
            min=*(strings+i);
    }
    return min;
}
