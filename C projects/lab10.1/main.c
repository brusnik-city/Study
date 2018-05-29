#include <stdio.h>
#include <stdlib.h>

struct xyz{
char znak;
struct xyz *next;
}element;


int main()
{
    struct xyz a;
    struct xyz b;
    struct xyz c;
    a.next=&b;
    b.next=&c;
    c.next=&a;
    a.znak='x';
    a.next->znak='y';
    a.next->next->znak='z';
    printf("%c , %c , %c \n",b.znak,b.next->znak,b.next->next->znak);
    c.znak='Z';
    c.next->znak='X';
    c.next->next->znak='Y';
     printf("%c , %c , %c \n",b.znak,b.next->znak,b.next->next->znak);
    return 0;
}
