// Write a C program to enter the radius of a circle and find its circumference and area.

#include<stdio.h>

int main() {
    float r, circ, area;
    float pi = 3.1416;

    printf("Enter the radius of circle: ");
    scanf("%f", &r);

    circ = 2 * pi * r;
    area = pi * r * r;

    printf("Circumference of circle: %.2f\n", circ);
    printf("Area of circle: %.2f", area);

    return 0;
}