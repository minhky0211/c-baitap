// Baitap04.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
	cout << "Kiem tra so nguyen chan/le" << endl;
	int n, remainder;
	cout << "Nhap so mot so nguyen: ", cin >> n;
	remainder = n % 2;
	switch (remainder)
	{
		case 0: 
		{
			cout << "So chan";
		}
			  break;
		case 1:
		{
			cout << "So le";
		}
		default:
			break;
	}
}

