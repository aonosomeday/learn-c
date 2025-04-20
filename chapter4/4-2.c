#include <stdio.h>

int gcd(int x, int y) {
    int i = x;
    int j = y;
    int k;
    int result;

    while (j != 0) {
        k = j;
        j = i % j;
        i = k;
    }

    return i;
}

int main() {
    printf("GCD(100, 85): %d\n", gcd(100, 85));
    printf("GCD(1025, 820): %d\n", gcd(1025, 820));
}
