// Arrays.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
    int m[5];
    m[0] = 1;
    cout << m[0] << endl;
    char chKytu[] = { 'b','c','x','t' };
    for (int i = 0; i < 4; i++)
    {
        cout << chKytu[i] << endl;
    }
    if (chKytu[2] == 'x') {
        chKytu[3] = 'e';
        cout << chKytu[3];
    }
}


