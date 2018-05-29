/*Zadanie 2*/
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>


struct node{
 char var;
 struct node *next;
};

struct node * front (struct node *wsk, char value){
	struct node *nowa= malloc(sizeof(struct node));
	if(nowa==NULL) return NULL;
	nowa->var = value;
	nowa->next = wsk;
	return nowa;
}
int usun(struct node **wsk,char var);

void wypisz(struct node *wsk){

while (wsk!=NULL)
{ printf ("%c",wsk->var);
  wsk = wsk->next;
	}
}
void zwolnij (struct node *wsk){
if (wsk == NULL) return;
struct node *p;
while(wsk!=NULL){
	p = wsk->next;
	free(wsk);
	wsk = p;
}
}


int usun(struct node **wsk,char value)
{
	struct node *p;
	struct node *w;
	int ilosc=0;


		while(*wsk!=NULL &&((*wsk)->var==toupper(value)||(*wsk)->var==tolower(value)))
		{
			p=*wsk;
			*wsk=(*wsk)->next;
			free(p);
			ilosc++;
		}

		w=*wsk;
		if(*wsk!=NULL)
		{
		while(w->next!=NULL)
		{
			if(w->next->var==tolower(value) || w->next->var==toupper(value))
			{
				p=w->next;
				w->next=p->next;
				free(p);
				ilosc++;
			}
			else w=w->next;
		}
	}
	return ilosc;
}


int main(){
  struct node *head = NULL;
  int ilosc;
 head = front(head,'A');
  head = front(head,'l');
  head = front(head,'a');
  head = front(head,' ');
  head = front(head,'m');
  head = front(head,'a');
  head = front(head,' ');
  head = front(head,'k');
  head = front(head,'o');
  head = front(head,'t');
  head = front(head,'a');
  wypisz(head);

   printf("\n");
  ilosc= usun(&head,'a');
   wypisz(head);
   printf("\n");
  zwolnij(head);
  printf("%d",ilosc);
	return 0;
}
