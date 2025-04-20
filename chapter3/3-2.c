#include <stdio.h>

/**
 * @param height centimeter
 * @param weight kilogram
 */
double get_bmi(double height, double weight) {
    double height_meter = height / 100;
    return weight / (height_meter * height_meter);
}

int main() {
    printf("%lf\n", get_bmi(165, 55));
    printf("%lf\n", get_bmi(182, 69));
    printf("%lf\n", get_bmi(170, 89));
}
