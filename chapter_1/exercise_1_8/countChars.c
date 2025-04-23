/* write a program to count blanks, tabs, and newlines*/

#include <stdio.h>

int main(){
    int c, blanks, tabs, newlines;

    blanks = 0;
    tabs = 0;
    newlines = 0;

    while ((c = getchar()) != EOF){
        if (c == ' '){
            ++blanks;
        }
        else if (c == '\t'){
            ++tabs;
        }
        else if (c == '\n'){
            ++newlines;
        }
    }

    printf("blanks: %d\ntabs: %d\nnewlines: %d\n", blanks, tabs, newlines);

    return 0;
}