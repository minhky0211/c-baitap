// ASCII.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
    int i;
	cout << "BaNG mA ASCII" << endl;
	for (i = 0; i <=255; i++)
	{
		cout << i << " | " << (char)i << endl;
	}
}
