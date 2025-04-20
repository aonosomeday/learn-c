#include <stdio.h>

double convert_celcius_to_fahrenheit(double celcius_degree) {
  return (celcius_degree * 9/5) + 32;
}

int main() {
    printf("%lf\n", convert_celcius_to_fahrenheit(10));
    printf("%lf\n", convert_celcius_to_fahrenheit(12.3));
    printf("%lf\n", convert_celcius_to_fahrenheit(24.3));
}
