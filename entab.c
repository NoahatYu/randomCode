#include <stdio.h>
#include <ctype.h>
#define TABSPACE 4
#define SPACE ' '

int main(void) {
    int c = 0;//The character to be read and outputted to file.
    int col = 0;//The current place in the string col number
    while ((c = getchar()) != EOF) {//fetch the next char in the input file
        if (c == '\n') {/* if a newline then reset col and put the char there */
            col = 0;
            putchar(c);
        }
        else if (isblank(c)){/* If a space or blank*/
            ++col;
            if (col == TABSPACE){//If 4 spaces are found
                col = 0;
                putchar('\t');/* Put a tab in place of 4 spaces */
            }
        }
        else{
            int i = 0;
            while(i < col){
                putchar(SPACE);/* Put and add a space */
                ++i;
            }
            col = 0;
            putchar(c);
        }
    }
    return 0;
}
