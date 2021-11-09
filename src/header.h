#ifndef HUFF_MAN_PROJECT_HEADER_H
#define HUFF_MAN_PROJECT_HEADER_H
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

// This is a structure that holds a character and its redundancy
typedef struct _node{
    char c;
    int r;
    struct _node* right;
    struct _node* left;
} charRedundancy;

// This function takes a string and its size as parameters and return a charRedundancy sorted array in increasing order
charRedundancy* getRedundancy(const char*, int);

// This function takes an array of charRedundancy and its size and then return a sorted array
charRedundancy* sort(charRedundancy*, int);

#endif //HUFF_MAN_PROJECT_HEADER_H