﻿#include <iostream>
using namespace std;
int main()
{
	/*
	cout << "Kiem tra so nguyen chan/le" << endl;
	int n, remainder;
	cout << "Nhap so mot so nguyen: ", cin >> n;
	@@ -23,7 +24,7 @@ int main()
	default:
		break;
	}
	//Tính ti?n ?i?n d?a vào s? kwh
	int kwh, fee;
	const int kwh100 = 600;
	const int kwh150 = 700;
	@@ -45,4 +46,219 @@ int main()
		fee = (kwh - 200) * 1100 + (kwh - 150) * 900 + (kwh - 100) * 700 + 100 * 600;
	}
	cout << "So tong so tien la: " << fee;
	*/
	//Bài tập toán tử
	//cộng trừ nhân chia
	/*
	double a, b,ketqua;
	ketqua = 0;
	char ch;
	cout << "Nhap lan luot hai so a,b: ", cin >> a >> b, cout << endl;
	cout << "Nhap pheptinh [+.-.*,/]:", cin >> ch, cout << endl;
	switch (ch) {
		case '+': 
		{
			ketqua = a + b;
		}
			break;
		case '-':
		{
			ketqua = a - b;
		}
		break;
		case '*':
		{
			ketqua = a * b;
		}
		break;
		case '/':
		{
			if (b == 0) {
				cout << "error";
			}
			else
			{
				ketqua = a / b;
			}
		}
	}
	cout << "Ket qua: " << ketqua;
	*/
	//Bài tập
	//Tính chu vi diện tích tam giác
	/*
	cv=a+b+c
	p = cv/2
	dt = sqrt(p*(p-a)*(p-b)*(p-c))
	
	double a, b, c, cv, p, dt;
	cout << "Tinh chu vi dien tich tam giac: " << endl;
	cout << "Nhap ba canh lan luot a,b,c: " << endl, cin >> a >> b >> c;
	if (a > 0 && b > 0 && c > 0) {
		cv = a + b + c; // Chu vi
		p = cv / 2;
		dt = sqrt(p * (p - a) * (p - b) * (p - c));
		cout << "Chu vi: " << cv << endl;
		cout << "Dien tich: " << dt << endl;
	}
	else
	{
		cout << "Khong xuat hien tam giac";
	}
	*/
	//Bài tập
	/*
	Nhập vào tháng t (1<= t <= 12) Cho biet thang t đó có bao nhiêu ngày. Riêng tháng 2 thì phải kiểm tra năm nhuận
	Năm nhuận là năm chia hết cho 4 mà không chia hết cho 100 hoặc chia hết cho 400
	Tháng chia hết cho 2 có 30 ngày ngược lại là 31
	int t, year;
	cout << "Nhap vao thang t: ", cin >> t;
	if (t >= 1 && t <= 12) {
		if (t != 2) {
			if ((t % 2) == 0) {
				cout << "Thang " << t << " co 30 ngay";
			}
			else
			{
				cout << "Thang " << t << "co 31 ngay";
			}
		}
		else
		{
			cout << "Nhap nam: ", cin >> year;
			if ((year % 4) == 0 && (year% 100)!=0) 
			{
				cout << "Thang 2 nam " << year << " la nam nhuan nen co 29 ngay";
			}
			else
			{
				cout << "Thang 2 nam " << year << " khong phai la nam nhuan nen co 28 ngay";
			}
		}
	}
	else
	{
		cout << "Loi";
	}
		*/
	//Bài tập
	//Nhao vao so n co 2 chu so, đọc số n này ra dạng chữ 
	//Ví dụ 35-> ba mươi lăm
	/*
	int n, block1, block2;
	cout << "Chuyen so n ra chu so" << endl;
	cout << "Nhap so n: ", cin >> n;
	if (n >= -99 && n <= 99) {
		if (n < 0) {
			cout << "Am ";
			n *= -1;
		}
		block1 = (n % 100) / 10; // Hàng chục
		block2 = (n % 10); //Hàng đơn vị
		switch (block1) {
		case 0:
		{
			cout << "Khong";
		}
		break;
		case 1:
		{
			cout << "Muoi";
		}
		break;
		case 2:
		{
			cout << "Hai Muoi";
		}
		break;
		case 3:
		{
			cout << "Ba Muoi";
		}
		break;
		case 4:
		{
			cout << "Bon Muoi";
		}
		break;
		case 5:
		{
			cout << "Nam Muoi";
		}
		break;
		case 6:
		{
			cout << "Sau Muoi";
		}
		break;
		case 7:
		{
			cout << "Bay Muoi";
		}
		break;
		case 8:
		{
			cout << "Tam Muoi";
		}
		break;
		case 9:
		{
			cout << "Chin Muoi";
		}
		break;
		}
		cout << " ";
		switch (block2)
		{
		case 1:
		{
			cout << "Mot";
		}
		break;
		case 2:
		{
			cout << "Hai";
		}
		break;
		case 3:
		{
			cout << "Ba";
		}
		break;
		case 4:
		{
			cout << "Bon";
		}
		break;
		case 5:
		{
			cout << "Lam";
		}
		break;
		case 6:
		{
			cout << "Sau";
		}
		break;
		case 7:
		{
			cout << "Bay";
		}
		break;
		case 8:
		{
			cout << "Tam";
		}
		break;
		case 9:
		{
			cout << "Chin";
		}
		break;
		default:
			break;
		}
	}
	*/
}