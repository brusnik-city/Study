#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define EPS 0.0000000001
double f1(double x);
double f2(double x);
double f3(double x);
int zero(double (*f)(double), double a, double b, double* z, double eps);


int main()
{
int (*f)(double);
f=f2;
double z;
int jest;
jest=zero(f,0,8,&z,EPS);
if(jest==0)printf(". Nie znaleziono miejsca zerowego");
if(jest==1)printf("funkcja posiada miejsce zerowe w punkcie %lf",z);
    return 0;
}

double f1 (double x)
{
    return sin(x);
}

double f2 (double x)
{
    return (-x*x+3*x+11);
}

double f3 (double x)
{
    return (x*x+3*x+11);
}

int zero(double (*f)(double), double a, double b, double* z, double eps)
{
    double fa,fb,fo;
    fa=f(a);
    fb=f(b);
    if(fa*fb>0)
    {
    printf ("funkcja nie spelnia zalozen");
    return 0;
    }
    while((b-a)>eps)
    {
        *z=((a+b)/2);
        fo=f(*z);
        if(abs(fo)<eps)return 1;
        if((fa*fo)<0) return zero(f,a,*z,z,eps);
        else return zero(f,*z,b,z,eps);
    }
}
