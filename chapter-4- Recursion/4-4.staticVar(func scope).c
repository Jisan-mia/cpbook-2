//Static variable
//We can write static var in two way
// i) global scope(out of the function)
// ii) function scope (in the function)

#include <stdio.h>

void func(){
    int a = 10;
    static int s = 10;

    a = a+2;
    s = s+2;

    printf("a = %d, s = %d\n", a, s);
}
int main(){
    func();
    func();
    func();

    return 0;
}
