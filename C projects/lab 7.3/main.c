#include <stdio.h>
#include <stdlib.h>


double fun0(double x) { return log(x); }
double fun1(double x) { return x*x;    }
double fun2(double x) { return tan(x); }
double fun3(double x) { return sin(x); }
double fun4(double x) { return cos(x); }

double (*fun(double **tab, int ile,double x))(double);

int main()
{
    char* nazwy[]={"log", "pow", "tan","sin","cos"};
    double(*TAB_FUN[5])(double);
    TAB_FUN[0] = fun0;
TAB_FUN[1] = fun1;
TAB_FUN[2] = fun2;
TAB_FUN[3] = fun3;
TAB_FUN[4] = fun4;
double wynik;

    return 0;
}

double (*fun(double **tab, int ile,double x))(double)
{
    int i;
    double max=-100;
    double wynik;
    int naj=0;
    for(i=0;i<ile;i++)
    {

        if((**tab[i])(x)>max)
        {
            max=(*tab[i])(x);
            naj=i;
        }

    }
    return tab+naj;
}
