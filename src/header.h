#ifndef HUFF_MAN_PROJECT_HEADER_H
#define HUFF_MAN_PROJECT_HEADER_H
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

// This is a structure that holds a character and its redundancy
typedef struct {
    char c;
    int r;
} charRedundancy;

// This function takes a string and its size as parameters and return a charRedundancy sorted array in increasing order
charRedundancy* getRedundancy(const char*, int);

#endif //HUFF_MAN_PROJECT_HEADER_H
