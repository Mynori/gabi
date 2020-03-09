/**
 ** gabi 
 ** 2020
 */

#include "utilities/charUtils.h"

bool    sameChar(const char a, const char b) {
    return (a == b);
}

bool    isAlpha(const char c) {
    return ((c >= 'a' && c <= 'z')
        || (c >= 'A' && c <= 'Z'));
}

bool    isNum(const char c) {
    return (c >= '0' && c <= '9');
}

bool    isAlphaNum(const char c) {
    return (isAlpha(c) || isNum(c));
}