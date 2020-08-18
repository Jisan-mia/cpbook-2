//Static variable
//We can write static var in two way
// i) global scope(out of the function)
// ii) function scope (in the function)


#include <stdio.h>

int a; // We can access global variable from any function of
static int b;//We can only access(in any function scope) static variable in the file where it declared (global static var)
void func(){
    a = a+1;
    b = b+1;
}
int main(){
    func();
    printf("a = %d\n", a);
    printf("b = %d\n", b);



    return 0;
}

