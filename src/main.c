/**
 ** Mynori 
 ** 2020
 */

#include "gabi.h"

int interpreter() {
    return 0;
}

int help() {
    printf("Gabi - The GameBoy Interpreter");
    printf(" (version: %s)\n\n", GABI_VERSION);
    printf("Usage: ./gabi\n");
    printf("\t-h\tprints help\n");
    return 0;
}

int main(int argc, char *argv[]) {
    if (argc == 1)
        return interpreter();
    if (argc == 2 && strcmp(argv[0], "-h") != 0)
        return help();
    return 0;
}