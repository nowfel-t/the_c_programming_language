#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int c;
    while((c = getchar()) != EOF) {
        if (c == ' ') {
            putchar('\n');
        } else {
            putchar(c);
        }
    }

    return EXIT_SUCCESS;
}