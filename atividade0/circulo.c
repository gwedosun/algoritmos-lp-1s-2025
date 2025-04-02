#include <stdio.h>
#include <math.h>

int main() {
    float raio = 3;
    float pi = 3.14;
    float area;

    area = pi * pow(raio, 2);

    printf("A area do circulo eh %.2f\n", area);

    return 0;
};
