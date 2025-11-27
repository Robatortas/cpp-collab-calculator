#pragma once
#ifndef GITHUBOOP_OPERATIONS_H
#define GITHUBOOP_OPERATIONS_H
#include <cmath>

class operations {
    public:
        static double add(double a, double b);
        static double subtract(double a, double b);
        static double multiply(double a, double b);
        static double divide(double a, double b);
        static double pow(double base, int exponent);
        static double squareRoot(double a);
};
#endif