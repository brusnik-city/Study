#include <stdio.h>
#include <stdlib.h>

struct vector{
float x;
float y;
float z;
};
struct abc{
struct vector vect;
double dlugosc;
};
float dlugosc(float x,float y,float z);
struct vector suma_wek(struct vector q,struct vector p);
float iloczyn_skalarny(struct vector *p, struct vector *q);
void ilowek(struct vector p,struct vector q,struct vector *w);

int main()
{
    struct vector w1;
    struct vector w2;
    printf("wektor x =");scanf("%f",&w1.x);
    printf("wektor y =");scanf("%f",&w1.y);
    printf("wektor z =");scanf("%f",&w1.z);

    printf("\nwektor x =");scanf("%f",&w2.x);
    printf("wektor y =");scanf("%f",&w2.y);
    printf("wektor z =");scanf("%f",&w2.z);

    printf("dlugosc wektora w1 to %f\n",dlugosc(w1.x,w1.y,w1.z));

    struct vector w3;
        w3=suma_wek(w1,w2);
    printf ("suma wektorowa 2 wektorow to %f %f %f",w3.x,w3.y,w3.z);

    float iloczyn=iloczyn_skalarny(&w1,&w2);
	printf("\nIloczyn skalarny wynosi: %.2f",iloczyn);

	struct vector n;
	ilowek(w1,w2,&n);
	printf("\nIloczyn wektorowy wynosi: [%.2f, %.2f, %.2f]",n.x,n.y,n.z);


    return 0;
}

float dlugosc(float x,float y,float z)
{
    float dl;

	dl=(sqrt(x*x+y*y+z*z));
	return dl;
}

struct vector suma_wek(struct vector q,struct vector p)
{
    struct vector sumawektorowa;
	sumawektorowa.x=q.x+p.x;
	sumawektorowa.y=q.y+p.y;
	sumawektorowa.z=q.z+p.z;
	return sumawektorowa;

}
float iloczyn_skalarny(struct vector *p, struct vector *q)
{
	float iloczyn=p->x*q->x+p->y*q->y+p->z*q->z;
	return iloczyn;
}

void ilowek(struct vector p,struct vector q,struct vector *w)
{
	w->x=p.x*q.x;
	w->y=p.y*q.y;
	w->z=p.z*q.z;
	return;
}
