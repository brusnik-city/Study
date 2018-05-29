#include <stdio.h>
#include <stdlib.h>

struct skor
{
    char tab[30];
    int licznik;
    struct skor *next;
};
/*
struct node * porzadek (struct node *wsk, char value){
	struct node *nowy = malloc(sizeof(struct node));
	if(nowy==NULL) return NULL;
  	nowy->var = value;
	nowy->next = NULL;
	if (wsk == NULL)
	    return nowy;
	if (wsk->var > value ){
	  nowy->next = wsk;
	  return new;	}
*/
int main()
{
    struct skor *head;
    head=NULL;
    FILE *plik;
    plik=fopen("dane.txt","r+t");
    fseek(plik, 0, SEEK_END);
    while(plik!=NULL)
    {
        fscanf(plik, "%s", .tab);
        element.licznik= element.licznik+1;
        element=head.next;
    }


    return 0;
}
