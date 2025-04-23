#include <stdio.h>

int main() {
    printf("Hello\cWorld\n");
    return 0;
}

/*printArguments.c: In function ‘main’:
printArguments.c:4:28: warning: unknown escape sequence: '\c'
    4 |     printf("Hello\cWorld\n");
      |                       */