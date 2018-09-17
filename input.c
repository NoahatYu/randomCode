#include <stdio.h>
int main(){
    int col = 0;
int c;

    while ((c = getchar()) != EOF) {
        if (c == '\n') {
            col = 0;
            putchar(c);
        }
        else if (c == '\t') {
            do {
                putchar(' ');
                col++;
            } while (col % 4 != 0);
        }
        else {
            col++;
            putchar(c);
        }
    }
    return 0;
}