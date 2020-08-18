#include <stdio.h>

int x =1;
int z = 2;
void myFnc(int y){
    y = y*2;
    x = x+10;
    z = z+3;
    printf("myFnc, x = %d, y = %d\n", x, y);
}
int main(){

    int y = 5;
    x = 10;

    myFnc(y);
    z= z+5;
    printf("main, z= %d , x= %d, y = %d\n",z, x, y);

    return 0;
}

