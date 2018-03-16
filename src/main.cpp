#include <iostream>

#include "addition/addition.h"
#include "division/division.h"

int main(int argc, const char *argv[]) {
    std::cout << " 9 + 11 = " << add(9, 11) << std::endl;
    std::cout << " 12 / 2 = " << divide(12, 2) << std::endl;
    return 0;
}