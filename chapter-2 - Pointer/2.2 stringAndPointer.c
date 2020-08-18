#include <stdio.h>

int main(){
    //pointer with string
    char s[] = "Bangladesh";
    char *p;//declaring character pointer

    p = s;
    printf("Name of our country: %s\n",p);

    //assigning character type variable to character type pointer;
    char c1 = 'A', c2 = 'B', c3 = 'C';
    char *p1, *p2, *p3;

    p1 = &c1;
    p2 = &c2;
    p3 = &c3;

    printf("%p, %c, %c\n", *p1, *p2, *p3);
    return 0;
}
