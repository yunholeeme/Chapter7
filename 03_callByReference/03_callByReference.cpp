// 03_callByReference.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cmath>    // sin(), cos()

using namespace std;

void getSinCos(const double degrees, double& sin_out, double& cos_out)
{
    static const double pi = 3.141592 / 180.0;
    const double radians = degrees * pi;
    sin_out = std::sin(radians);
    cos_out = std::cos(radians);
} 
void addOne(int& y)
{
    cout << y << " " << &y << endl;

    y = y + 1;
}

int main()
{
    double sin(0.0);
    double cos(0.0);

    getSinCos(30.0, sin, cos);

    cout << sin << " " << cos << endl;
    //int x = 5;

    //cout << x << " " << &x << endl;

    //addOne(x);

    //cout << x << " " << &x << endl;

    return 0;
}

