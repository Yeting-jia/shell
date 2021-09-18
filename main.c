#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//#include "strtok.h"


char buf[1000];
/*
int main () {
    while ( !gets(buf) ) {
        struct token token = strtok( buf, ' ');
        close_token (token);
        for (int i = 0; i < token.str_nums; i++)
            printf("%s\n", token.str_list[i]);
    }
} */

int main (int argc, char **argv) {
    for (int i = 1; i < argc; i++) {
        if ( strcmp(argv[i], "ls") ==0) {
            if (strcmp(argv[++i], "-l") == 0) {
                printf("path = %s\n",argv[++i]);
            }
        }
    }
}