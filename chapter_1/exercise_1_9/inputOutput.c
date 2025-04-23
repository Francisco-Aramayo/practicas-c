/* Write a program to copy its input to its output, replacing each
string of one or more blanks by a single blank*/

#include <stdio.h>

int main(){
    int c, prev = 0;

    while ((c = getchar()) != EOF) {
        if (c == ' ') {
            if (prev != ' ') {
                putchar(c);
            }
        } else {
            putchar(c);
        }
        prev = c;
    }

    return 0;
}