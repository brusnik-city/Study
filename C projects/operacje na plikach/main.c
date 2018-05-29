#include <stdio.h>
#include <stdlib.h>
struct osoba {
 char imie[25];
 char nazwisko[25];
 int wiek;
 };

int main()
{
    struct osoba student={"Kamil", "Kucharski", 20};
    int i;
    //char tab[512];
    FILE *fp;
    fp=fopen("test.txt","wt");
    //fgets(tab,512,fp);
    fwrite(&student,sizeof(struct osoba),1,fp);
    //printf("%s",tab);
    return 0;
}
