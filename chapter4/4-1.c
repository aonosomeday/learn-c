#include <stdio.h>

int main() {
    int i = 1;

    while (i <= 9) {
        printf("%d: ", i);
        int j = 1;
        while(j <= 9) {
            printf("%d\t", i * j);
            j = j + 1;
        }

        printf("\n");
        i = i + 1;
    }

    return 0;
}
