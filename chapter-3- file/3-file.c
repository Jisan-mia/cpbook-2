#include <stdio.h>

int main(){
    FILE *fp;
    char filename[] = "3-file.txt";

    fp = fopen(filename, "w");

    fprintf(fp, "This is a file created by my c programme! ");
    fprintf(fp, "I am so happy!\n");

    fclose(fp);

    fp = fopen(filename, "a+");
    fprintf(fp, "second line\n");
    fclose(fp);

    return 0;
}
