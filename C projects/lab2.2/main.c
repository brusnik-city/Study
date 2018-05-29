#include <stdio.h>
#include <stdlib.h>
int *funkcja(float *x, float *y);
int main()
{
    float x=2.84;
    float y=4.03;
    float *px;
    px=&x;

    float *py;
    py=&y;
    int *wynik;
    wynik=funkcja(px, py);
    printf("podloga z iloczynu dwoch liczb = %d",*wynik);
    return 0;
}

int *funkcja(float *x, float *y)
{
    float wynik;
    int wyn;
    int * wsk;
    wynik=(*x) * (*y);

    wyn=(int)wynik;
    wsk=&wyn;
    return wsk;
}
