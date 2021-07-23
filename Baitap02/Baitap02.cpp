// Baitap02.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
  //Bài 1:
	/*
	Nhập một kí tự in ra số ASCII và kí tự tiếp theo
	char key;
	cout << "Nhap mot ki tu: ", cin >> key;
	int charx = (int)key;
	cout << "Ma ASCII: " << charx << endl;
	cout << "Ma ASCII tiep theo: " << charx + 1 << endl;
	char nextChar = (char)(charx + 1);
	cout << "Ki tu tiep theo: " << nextChar << endl;
	*/
   //Bài 2
	/*
		A=(x^2 + x +1)^n +(x^2 - x + 1)^n
	
	cout << "Bieu thuc: A=(x^2 + x +1)^n +(x^2 - x + 1)^n" << endl;
	int x, n;
	cout << "Nhap gia tri x: ", cin >> x;
	cout << "Nhap gia tri n: ", cin >> n;
	double result = pow(pow(x, 2) + x + 1, n) + pow(pow(x, 2) + x - 1, n);
	cout << "Ket qua: " << result << endl;
	*/
	//Bài 3
	/*
	Tính độ dài Vector |AB|
	
	double xA, yA, zA;
	double xB, yB, zB;
	cout << "Nhap toa do Vector A: " << endl;
	cout << "xA: ", cin >> xA;
	cout << "yA: ", cin >> yA;
	cout << "zA: ", cin >> zA;
	cout << "Nhap toa do Vector B: " << endl;
	cout << "xB: ", cin >> xB;
	cout << "yB: ", cin >> yB;
	cout << "zB: ", cin >> zB;
	double ketqua = sqrt(pow(xB - xA, 2) + pow(yB - yA, 1) + pow(zB - zA, 2));
	cout << "Ket qua |AB|= " << ketqua << endl;
	*/
	//Bài 4
	/*
	Đảo ngược 3 ký số nguyên dương có 3 chữ số
	123 -> 321
	hàng đơn vị = x%10;
	hàng chục = (x/10) % 10;
	hàng trăm = (x/100) % 10;
	*/
	int threeKeys;
	cout << "Nhap so nguyen duong co 3 chu so: ", cin >> threeKeys;
	int hdv = threeKeys % 10;
	int hc = (threeKeys / 10) % 10;
	int htram = (threeKeys / 100) % 10;
	cout << "Ket qua: " << hdv << hc << htram << endl;

}
