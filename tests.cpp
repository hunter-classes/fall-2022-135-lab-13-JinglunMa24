#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "funcs.h"

TEST_CASE("Task A") {
    CHECK(printRange(-2, 10) == "-2 -1 0 1 2 3 4 5 6 7 8 9 10 ");
    CHECK(printRange(90, 1) == "");
    CHECK(printRange(50, 55) == "50 51 52 53 54 55 ");
    CHECK(printRange(-10, -2) == "-10 -9 -8 -7 -6 -5 -4 -3 -2 ");
}

TEST_CASE("Task B") {
    CHECK(sumRange(1, 3) == 6);
    CHECK(sumRange(-2, 10) == 52);
    CHECK(sumRange(100, 110) == 1155);
    CHECK(sumRange(-53, 54) == 54);
}

TEST_CASE("Task C") {
    int size = 10;
    int *arr = new int[size]; // allocate array dynamically
    arr[0] = 12;
    arr[1] = 17;
    arr[2] = -5;
    arr[3] = 3;
    arr[4] = 7;
    arr[5] = -15;
    arr[6] = 27;
    arr[7] = 5;
    arr[8] = 13;
    arr[9] = -21;

    CHECK(sumArray(arr, size) == 43);
    CHECK(sumArray(arr, 5) == 34);
    CHECK(sumArray(arr, 3) == 24);
    CHECK(sumArray(arr, 8) == 51);
}

TEST_CASE("Task D") {
    CHECK(isAlphanumeric("dkjbnwasjk,daw") == false);
    CHECK(isAlphanumeric("jkdbajhdbkajwdb") == true);
    CHECK(isAlphanumeric("dkaws213ghv124hgj1234f") == true);
    CHECK(isAlphanumeric("dwa .'];'][]") == false);
}

TEST_CASE("Task E") {
    CHECK(nestedParens("((()))") == true);
    CHECK(nestedParens("((((()))))") == true);
    CHECK(nestedParens("))((") == false);
    CHECK(nestedParens(")((()()") == false);
}