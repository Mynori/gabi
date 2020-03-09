/**
 ** gabi
 ** 2020
 */

#include "utilities/getNextLine.h"

#define BUFFER_SIZE 1024

char    *readBuffer(const int fd) {
    char    *result = malloc(sizeof(char) * (BUFFER_SIZE + 1));
    ssize_t sizeRead = read(fd, result, BUFFER_SIZE);

    if (sizeRead > 0) {
        if (!result)
            return NULL;
        result[sizeRead] = '\0';
        return result;
    }
    return NULL;
}

char    *getNextLine(const int fd) {
    return readBuffer(fd);
}