#include <stdio.h>
#define N 34

int main()
{
int i;
char tab[]="0000000000000000010000000000000000";
char tab_p[]="0000000000000000000000000000000000";
int n=100;
while(n>0)
{
    printf("------%d----- \n",101-n);
for(i=0;i<N;i++)
{
printf("%c ",tab[i]);
} //wypisz na ekran tablicê tab.
printf("\n");
int roz = (sizeof(tab)-1);//Przypisz zmiennej ca³kowitej roz rozmiar tablicy tab.

if(tab[roz-1]=='0' && tab[1]=='0' && tab[2]=='0') tab_p[0]='0';
else if(tab[roz-1]=='0' && tab[0]=='0' && tab[1]=='1') tab_p[0]='0';
else if(tab[roz-1]=='0' && tab[0]=='1' && tab[1]=='0') tab_p[0]='0';
else if(tab[roz-1]=='0' && tab[0]=='1' && tab[1]=='1') tab_p[0]='0';
else if(tab[roz-1]=='1' && tab[0]=='0' && tab[1]=='0') tab_p[0]='0';
else if(tab[roz-1]=='1' && tab[0]=='0' && tab[1]=='1') tab_p[0]='0';
else if(tab[roz-1]=='1' && tab[0]=='1' && tab[1]=='0') tab_p[0]='0';
else if(tab[roz-1]=='1' && tab[0]=='1' && tab[1]=='1') tab_p[0]='0';

for(i=1;i<N-2;i++)
{
	if(tab[i-1]=='0' && tab[i]=='0' && tab[i+1]=='0') tab_p[i]='0';
	else if(tab[i-1]=='0' && tab[i]=='0' && tab[i+1]=='1') tab_p[i]='1';
	else if(tab[i-1]=='0' && tab[i]=='1' && tab[i+1]=='0') tab_p[i]='1';
	else if(tab[i-1]=='0' && tab[i]=='1' && tab[i+1]=='1') tab_p[i]='1';
	else if(tab[i-1]=='1' && tab[i]=='0' && tab[i+1]=='0') tab_p[i]='1';
	else if(tab[i-1]=='1' && tab[i]=='0' && tab[i+1]=='1') tab_p[i]='0';
	else if(tab[i-1]=='1' && tab[i]=='1' && tab[i+1]=='0') tab_p[i]='0';
	else if(tab[i-1]=='1' && tab[i]=='1' && tab[i+1]=='1') tab_p[i]='0';

}
if(tab[roz-2]=='0' && tab[roz-1]=='0' && tab[1]=='0') tab_p[roz-1]='0';
else if(tab[roz-2]=='0' && tab[roz-1]=='0' && tab[1]=='1') tab_p[roz-1]='0';
else if(tab[roz-2]=='0' && tab[roz-1]=='1' && tab[1]=='0') tab_p[roz-1]='0';
else if(tab[roz-2]=='0' && tab[roz-1]=='1' && tab[1]=='1') tab_p[roz-1]='0';
else if(tab[roz-2]=='1' && tab[roz-1]=='0' && tab[1]=='0') tab_p[roz-1]='0';
else if(tab[roz-2]=='1' && tab[roz-1]=='0' && tab[1]=='1') tab_p[roz-1]='0';
else if(tab[roz-2]=='1' && tab[roz-1]=='1' && tab[1]=='0') tab_p[roz-1]='0';
else if(tab[roz-2]=='1' && tab[roz-1]=='1' && tab[1]=='1') tab_p[roz-1]='0';

for(i=0;i<roz;i++)
{
    tab[i]=tab_p[i];
    printf("%c ",tab[i]);
}

printf("\n\n");
n--;
}
//Skopiuj tablicê tab_p do tablicy tab.
//wypisz tab.
//zwolnij pamieæ
return 0;
}
