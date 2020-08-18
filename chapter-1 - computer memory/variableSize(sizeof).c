#include <stdio.h>

int main(){
    int num;
    char ch;
    double d_num;
    float f_num;

    //direct variable size
    printf("int size: %lu\n", sizeof(int));
    printf("double size: %u\n", sizeof(double));
    //variable size with declared variable name;
    printf("Size of int: %d\n", sizeof(num));
    printf("Size of char: %d\n", sizeof(ch));
    printf("Size of doulbe: %d\n", sizeof(d_num));
    printf("Sze of float: %d\n", sizeof(f_num));



    return 0;
}
