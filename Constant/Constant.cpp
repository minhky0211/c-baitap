// Constant.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
    const double PI = 3.14;
    double lengthCritical = 0;
    float result = 0;
    double s = 0;
    cout << "PI= " << PI << endl;
    cout << "Tinh chu vi duong tron\n";
    cout << "Nhap ban kinh duong tron:", cin >> lengthCritical;
    result = 2 * PI * lengthCritical;
    s = PI * pow(lengthCritical, 2);
    cout << "Result: " << result << "cm" << "\n";
    cout << "Dien tich: " << s << "cm";
}

