#include <stdio.h>

int main() {

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            printf(" %d", 1 + j + i);
        }
        printf("\n");
    }
}