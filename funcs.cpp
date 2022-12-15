#include <iostream>

// Task A
std::string printRange(int left, int right) {
    if (left > right) {
        return "";
    }
    else {
        return std::to_string(left) + " " + printRange(left + 1, right);
    }
}

// Task B
int sumRange(int left, int right) {
    if (left > right) {
        return 0;
    }
    else {
        return left + sumRange(left + 1, right);
    }
}
