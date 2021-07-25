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
		cout << "So chan" << endl;
	}
	break;
	case 1:
	{
		cout << "So le" << endl;
	}
	default:
		break;
	}
	//T¨ªnh ti?n ?i?n d?a v¨¤o s? kwh
	int kwh, fee;
	const int kwh100 = 600;
	const int kwh150 = 700;
	const int kwh200 = 900;
	const int kwhMax = 1100;
	cout << "Tinh tien dien" << endl;
	cout << "Nhap so kwh da su dung: ", cin >> kwh;
	if (kwh <= 100) {
		fee = kwh * 600;
	}
	else if (kwh >= 101 && kwh <= 150) {
		fee = (kwh - 100) * 700 + 100 * 600;
	}
	else if (kwh > 150 && kwh <= 200) {
		fee = (kwh - 150) * 900 + (kwh - 100) * 700 + 100 * 600;
	}
	else
	{
		fee = (kwh - 200) * 1100 + (kwh - 150) * 900 + (kwh - 100) * 700 + 100 * 600;
	}
	cout << "So tong so tien la: " << fee;
}
