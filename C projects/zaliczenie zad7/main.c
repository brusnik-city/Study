#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
struct lista_trig{
double (*wsk_fun)(double);
char *name;
struct lista_trig *next;
};

void dodaj(struct lista_trig **head,char *nazwa,double (*wsk_fun)(double));
void wypisz(struct lista_trig *head,double kat);
int main()
{
struct lista_trig *head;
head=NULL;
double (*wsk_f1)(double);
double (*wsk_f2)(double);
double (*wsk_f3)(double);
wsk_f1=sin;
wsk_f2=cos;
wsk_f3=tan;
char s[3][4]={"sin\0","cos\0","tan\0"};
dodaj(&head,s[0],wsk_f1);
dodaj(&head,s[1],wsk_f2);
dodaj(&head,s[2],wsk_f3);
double kat =0;
while((kat+=30)<120)
wypisz(head,kat-30);

printf(" %s, %s, %s",head->name,head->next->name,head->next->next->name);
zwolnij(&head);
    return 0;
}
void dodaj(struct lista_trig **head,char *nazwa ,double (*wsk_f)(double))
{
    struct lista_trig *pom;
    struct lista_trig *nowy;
    nowy=(struct lista_trig *)malloc(sizeof(struct lista_trig));
    nowy->name=nazwa;
    nowy->wsk_fun=wsk_f;
    nowy->next=NULL;

    if(*head==NULL)
    {
        *head=nowy;
    }
    else if(strcmp((*head)->name,nowy->name)>0)
    {
        nowy->next=*head;
        *head=nowy;
    }
    else
    {
        pom=*head;
        while((pom->next!=NULL) && (strcmp(pom->next->name,nowy->name)<0))pom=pom->next;
        nowy->next=pom->next;
        pom->next=nowy;

    }
}

void wypisz(struct lista_trig *head,double kat)
{
    while(head!=NULL)
    {
        double val=M_PI/180;
        printf("%s\t",head->name);
        printf("%.2lf\t",kat);
        printf("%.2lf\t",head->wsk_fun(val*kat));
        head=head->next;
        printf("\n");
    }
}

void zwolnij(struct lista_trig **head)
{
    struct lista_trig *p;
    while((*head)->next!=NULL)
    {
        p=head;
        *head=(*head)->next;
        free(p);

    }
    free(head);
}
