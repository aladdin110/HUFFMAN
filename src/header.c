#include "header.h"

charRedundancy* sort(charRedundancy* arr, int size) {
    charRedundancy* array = (charRedundancy*)malloc(size * sizeof(charRedundancy));
    int i, j;
    for (i = 0; i < size; i++) {

        int min_index = i;
        for (j = i+1; j < size; j++) {
            if (arr[j].r < arr[min_index].r) {
                min_index = j;
            }
        }

        if (min_index != i) {
            charRedundancy tmp = arr[i];
            arr[i] = arr[min_index];
            arr[min_index] = tmp;
        }
        array[i] = arr[i];
    }
    return array;
}


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

    charRedundancy* array = sort(arr, index);

    free(arr);
    free(string);
    return array;
}



