// Find out average of four numbers;

#include<stdio.h>

int main() {
    int num1, num2, num3, num4;
    float average;

    printf("Enter four numbers: ");
    scanf("%d %d %d %d", &num1, &num2, &num3, &num4);

    average = (num1 + num2 + num3 + num4) / 4.0;

    return 0;
}