/**
 ** gabi 
 ** 2020
 */

#ifndef TOKEN_H_
#define TOKEN_H_

#include <regex.h>
#include <stddef.h>

typedef struct token_s {
    long            id;
    void            *data;
    struct token_s  *next;
} token_t;

typedef struct tokenList_s {
    long        id;
    regex_t     *regex;
} tokenList_t;

extern const tokenList_t tokenList[];

token_t *lexer();

#endif