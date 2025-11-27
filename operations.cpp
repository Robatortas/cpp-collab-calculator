#include "operations.h"
#include <iostream>

double operations::add(double a, double b) {
    return a + b;
}

double operations::subtract(double a, double b) {
    return a - b;
}

double operations::multiply(double a, double b) { return a * b; }

double operations::divide(double a, double b) {
    if (b != 0) return a / b;
    else {
        std::cout << "Error: División por cero\n";
        return 0;
    }
}