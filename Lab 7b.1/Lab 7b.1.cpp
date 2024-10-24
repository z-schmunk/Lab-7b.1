//Zac Schmunk - 10/24/2024
//Lab 7b.1

#include <iostream>
#include <cmath>

// Function to find the smallest of three numbers
double smallest(double x, double y, double z) {
    double min = x;
    if (y < min) {
        min = y;
    }
    if (z < min) {
        min = z;
    }
    return min;
}

// Function to calculate average of three numbers
double average(double x, double y, double z) {
    return (x + y + z) / 3.0;
}

// Main program to test both functions
int main() {
    double num1, num2, num3;

    // Get input from user
    std::cout << "Enter three numbers: ";
    std::cin >> num1 >> num2 >> num3;

    // Test smallest function
    std::cout << "Smallest number: " << smallest(num1, num2, num3) << std::endl;

    // Test average function
    std::cout << "Average of numbers: " << average(num1, num2, num3) << std::endl;

    return 0;
}