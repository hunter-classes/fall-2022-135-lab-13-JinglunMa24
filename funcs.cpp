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

// Task C
int sumArray(int *arr, int size) {
    int index = size - 1;
    if (index > 0) {
        return *(arr + index) + sumArray(arr, size - 1);
    }
    else {
        return *(arr + index);
    }
}

// Task D
bool isAlphanumeric(std::string s) {
    if (s.length() == 0) {
        return true;
    }
    else {
        return std::isalnum(s[0]) && isAlphanumeric(s.substr(1));
    }
}

// Task E
bool nestedParens(std::string s) {
    if (s.length() == 0) {
        return true;
    }
    else {
        return (s[0] == '(' && s[s.length() - 1] == ')') && nestedParens(s.substr(1, s.length() - 2));
    }
}