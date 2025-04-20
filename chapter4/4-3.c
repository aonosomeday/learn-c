#include <stdio.h>
#include <math.h>

// b^2-4ac
void solve(double a, double b, double c) {
    int d = (b * b) - (4 * a * c);
    if(d < 0) {
        printf("解が求められません");
    }

    double x1 = (-b + sqrt(d)) / (2 * a);
    double x2 = (-b - sqrt(d)) / (2 * a);

    printf("%lf, %lf, %lf: %lf, %lf\n", a, b, c, x1, x2);
}

int main() {
    solve(2, -9.2, 5.1);
    solve(3, 13.5, -34.9);
}
