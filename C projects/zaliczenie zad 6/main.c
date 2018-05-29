#include <stdio.h>
struct s1 {
	char *s;
	int i;
	struct s1 *sp;
};

int main(void){
	static struct s1 a[]={
		{"abcd",1,a+1},
		{"efgh",2,a+2},
		{"ijk",3,a}
	};
	struct s1 *p=a;
	printf("%s, %s, %s \n", a[0].s , p->s , a[2].sp->s);
	printf("%s, %s \n",++(p->s) , a[--(p->sp->i)].s);
}
