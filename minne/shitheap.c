#include <stdio.h>
#include <stdlib.h>

int main() {
    size_t size = 1024 * 1024 * 10; //10MB
    char* block;

    while (1) {
        block = (char*) malloc(size);
        if (block == NULL) {
            printf("Allocate failed. Heap is full!\n");
            break;
        }
        else {
            printf("Allocated a %zu byte block!\n", size);
        }
    }
    return 0;
}

