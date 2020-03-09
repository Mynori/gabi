/**
 ** gabi
 ** 2020
 */

#include "gabi.h"

int gabi() {
    token_t *tokens = lexer();
    
    char    *nextLine = getNextLine(0);
    printf("%s", nextLine);
    if (nextLine) free(nextLine);
    (void) tokens;
    return 0;
}

int help() {
    printf("Gabi - The GAmeBoy Interpreter");
    printf(" (version: %s)\n\n", GABI_VERSION);
    printf("Usage: ./gabi\n");
    printf("\t-h\tprints help\n");
    return 0;
}

int main(int argc, char *argv[]) {
    if (argc == 1)
        return gabi();
    if (argc == 2 && strcmp(argv[0], "-h") != 0)
        return help();
    return 0;
}