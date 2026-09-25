// Write a C program to calculate and display the total salary of an employee considering that total salary is the sum of basic salary and house rent.

#include<stdio.h>

int main() {

    int salary, percent;
    float rent, total_salary;

    printf("Enter your Basic Salary: ");
    scanf("%d", &salary);

    printf("Enter the percentage of house rent: ");
    scanf("%d", &percent);

    rent = salary * 10 / 100;
    total_salary = rent + salary;

    printf("House rent: %.2f\n", rent);
    printf("Total salary: %.2f", total_salary);

    return 0;
}