#include "header.h"

charRedundancy* getRedundancy(const char* str, int size) {
    char* string = (char*)malloc(size * sizeof(char));
    strcpy(string, str);
    charRedundancy* arr = (charRedundancy*)malloc(size * sizeof(charRedundancy));
    int i = 0, index = 0, j, count = 1;
    while (string[i] != '\0') {
        if (string[i] == '~') {
            i++;
            continue;
        }
        arr[index].c = string[i];
        j = i + 1;
        while (string[j] != '\0') {
            if (string[i] == string[j]) {
                count++;
                string[j] = '~';
            }
            j++;
        }
        arr[index].r = count;
        count = 1;
        i++;
        index++;
    }

    charRedundancy* array = (charRedundancy*)malloc(index* sizeof(charRedundancy));
    for (i = 0; i < index; i++) {
        array[i] = arr[i];
    }

    free(arr);
    free(string);
    return array;
}