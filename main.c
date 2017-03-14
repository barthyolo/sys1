#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#include "address_book.h"

int main() {
    time_t tt;
    srand((unsigned int) time(&tt));
    printf("Hello, World!\n");
    for (int i = 0; i < 10; ++i) {
        printf("%c\n", rand() % 26 + 97);
    }

    char **names = malloc(sizeof(char *) * 10);

    for (int i = 0; i < 10; ++i) {
        int x = rand() % 6 + 5;
        char *text = malloc(sizeof(char) * x);
        text[0] = (char) (rand() % 26 + 65);
        for (int j = 1; j < x; ++j) {
            text[j] = (char) (rand() % 26 + 97);
        }
        //text[3] = '\n';
        names[i] = text;
        //printf("%s\n", text);
    }

    for (int i = 0; i < 10; ++i) {
        printf("%s\n", names[i]);
    }

    return 0;
}