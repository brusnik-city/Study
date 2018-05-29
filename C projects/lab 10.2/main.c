#include <stdio.h>
#include <stdlib.h>

typedef struct tnode {
char value;
struct tnode * next;
}element;

element* dodaj_na_poczatek (element *head,char val);
 void wypisz(element *p);
 void freememory(element *p);
 void dodaj_na_koniec (element **p,char val);
  void odwroc(element **p);
void dodaj_do_posortowanej(element **p, char val);


int main()
{
    int i;
	char tab[]={'a','c','v','f','t'};
	element *head;
	head=NULL;
	for(i=0;i<5;i++)
    {
        head=dodaj_na_poczatek (head,tab[i]);
    }
    wypisz(head);
    freememory(head);
    printf("\n\n");
    head=NULL;
    for(i=0;i<5;i++)
    {
        dodaj_na_koniec (&head,tab[i]);
    }
    wypisz(head);
    printf("\n\n");
    odwroc(&head);
    wypisz(head);
    freememory(head);
    head=NULL;
      printf("\n\n");

    head=dodaj_na_poczatek (head,'z');
    dodaj_do_posortowanej(&head,'b');
    dodaj_do_posortowanej(&head,'a');
    dodaj_do_posortowanej(&head,'x');
    dodaj_do_posortowanej(&head,'k');
    dodaj_do_posortowanej(&head,'k');
    dodaj_do_posortowanej(&head,'b');

    wypisz(head);

    return 0;
}

element* dodaj_na_poczatek (element *head,char val)
{
    element *x;
    x=(element*)malloc(sizeof(element));
    x->value=val;
    x->next=head;

    return x;
 };
  void wypisz(element *p)
  {
      while(p!=NULL)
      {
          printf("%c, ",p->value);
          p=p->next;
      }

  }

  void freememory(element *p)
  {
      if(p==NULL)exit(1);
      element *nastepny;
      nastepny=p->next;

      while(nastepny!=NULL)
      {
          free(p);
          p=nastepny;
          nastepny=p->next;
      }
  }

void dodaj_na_koniec(element **p, char val){
element *x,*wsk;
x=(element*)malloc(sizeof(element));
x->value=val;
x->next=NULL;
wsk=*p;
if(wsk==NULL)
    *p=x;
else
{
    while(wsk->next!=NULL)
    {
        wsk=wsk->next;
    }
    wsk->next=x;
}

 }

void odwroc(element **head)
{
	element *tmp, *pom;
	if (head == NULL)
		printf("Brak elementow");
	else
	{
		tmp = *head;
		while (tmp->next != NULL)
		{
			pom = tmp->next;
			tmp->next = pom->next;
			pom->next = *head;
			*head = pom;
		}
	}
}
void dodaj_do_posortowanej(element **p, char val)
{
    element *nowy,*nastepny;

    nowy=(element *)malloc(sizeof(element));
    nowy->value=val;
    nowy->next=NULL;

    if(*p==NULL)
    {
        *p=nowy;
    }
    else if(((*p)->value) > val)
    {
        nowy->next=*p;
        *p=nowy;
    }
    else
    {
        nastepny=(*p);
        while ((nastepny->next !=NULL) && (nastepny->next->value>val));
            nastepny=nastepny->next;
        nowy->next=nastepny->next;
        nastepny->next=nowy;


    }
}
