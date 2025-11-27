#include <iostream>
#include "operations.h"

int main() {
    double a=0.0, b=0.0, result=0.0;

    std::cout << "Insert the first number of the addition: ";
    std::cin >> a;
    std::cout << "Insert the second number of the addition: ";
    std::cin >> b;
    std::cout << "The result of the addition is: " << operations::add(a, b) << std::endl;
    return 0;
}