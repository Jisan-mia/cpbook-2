#include <stdio.h>

char charFunction(char ch){
    if(ch >= '0' && ch <= '9'){
        return 1;
    }
    else{
        return 0;
    }
}
int main(){
    char ch, result;
    ch = getchar();
    if(1 == charFunction(ch)){
        printf("This is a digit from 0-9\n");
    }
    else{
        printf("NaN");
    }

    printf("%c", result);


    return 0;
}
