#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#define N 100
char *TAB[N];
int i_rand(int min, int max);
void wypiszAll(char *tab[N]);
void wypiszSingle(char *tab);
int compare1(const void *, const void *);
int compare2(const void *,const void *);

int main(void){
	srand(time(0));
	int dlugoscStringa;
	int i,j;
	for(i=0;i<N;i++){
		dlugoscStringa=i_rand(5,10);
		char *string;
		string=malloc(dlugoscStringa*sizeof(char));
		string[dlugoscStringa]='\0';
		for(j=0;j<dlugoscStringa;j++){
			int losowe=i_rand(97,122);
			string[j]=losowe;
		}
		*(TAB+i)=string;
	}
	for(i=0;i<N;i++){
		int dlugosc=strlen(TAB[i]);
		qsort((TAB[i]),dlugosc,sizeof(char),compare1);
	}
	qsort(TAB,N,sizeof(char *),compare2);
	wypiszAll(TAB);

}
//----------------------
int i_rand(int min,int max){
	return rand()%(max-min+1)+min;
}

void wypiszSingle(char *tab){
	printf("| %s |\n",tab);
}

void wypiszAll(char *tab[N]){
	int i;
	for(i=0;i<N;i++){
		wypiszSingle(tab[i]);
	}
}

int compare2(const void *a,const void *b){
	const char **A=(const char**)a;
	const char **B=(const char**)b;
	return strcmp(*A,*B);
}


int compare1(const void *a, const void *b){
	const char *A=( char *)a;
	const char *B=( char *)b;
	char x= *A;
	char y= *B;
	if(x>y){return 1;}
	if(x<y){return -1;}
	return 0;

}
