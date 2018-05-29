#include <stdio.h>
#include <stdlib.h>

void cmp(const void *a, const void *b);

struct klient{
char f_name[40];
char l_name[40];
char code[7];
int age;

};
int main()
{
    struct klient tab[5];
    int i=0;
    FILE *plik;
    plik=fopen("dane.txt","r");
    if(plik==NULL)
    {
        printf("nie udalo sie otworzyc pliku");
        exit(-1);
    }

    for(i=0;i<5;i++)
    {
        fscanf(plik,"%s %s %s %d",tab[i].f_name,tab[i].l_name,tab[i].code,&tab[i].age);
        printf("%s %s %s %d",tab[i].f_name,tab[i].l_name,tab[i].code,tab[i].age);
		printf("\n");
    }
    qsort(tab,5,sizeof(tab[0]),cmp);

     for(i=0;i<5;i++)
    {

        printf("%s %s %s %d",tab[i].f_name,tab[i].l_name,tab[i].code,tab[i].age);
		printf("\n");
    }
    return 0;
}

void cmp(const void *a, const void *b)
{
    struct klient x =*((struct klient *)a);
    struct klient y =*((struct klient *)b);
    if(strcmp(x.l_name,y.l_name)==0)return strcmp(x.f_name,y.f_name);
    else return strcmp(x.l_name,y.l_name);
}
