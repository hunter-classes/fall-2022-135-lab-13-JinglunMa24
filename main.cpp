#include <iostream>
#include "funcs.h"

int main() {
    // Task A
    std::cout << printRange(-2, 10) << '\n';    // -2 to 10

    // Task B
    int x = sumRange(1, 3);
    std::cout << "This is " << x << '\n';   // 6
    
    int y = sumRange(-2, 10);
    std::cout << "That is " << y << '\n';   // 52
    return 0;
}