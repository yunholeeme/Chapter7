// Chapter7.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

int foo(int x, int y);


int main()
{
    int x = 1, y = 2;

    foo(6, 7);  // 6, 7 : arguments (actual parameters)
    foo(x, y + 1);

    return 0;
}

int foo(int x, int y)
{
    return x + y;
} // x and y are destroyed here
