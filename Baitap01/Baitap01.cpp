
#include <iostream>
using namespace std;
int main()
{
	//Tính lượng giác
	cout << "Tinh cac bieu thuc luong giac" << endl;
	const double PI = 3.14;
	int a = 0;
	cout << "Nhap so goc': ", cin >> a;
	double radian = a * PI / 180;
	cout << "Cos(a)= " << (double)cos(radian) << "\n";
	cout << "Sin(a)= " << (double)sin(radian) << "\n";
	cout << "tan(a)= " << (double)tan(radian) << "\n";
	cout << "cot(a)= " << (double)(1 / tan(radian)) << "\n";
	//Tính giờ phút giây
	int t = 0;
	cout << "Nhap so giay: ", cin >> t;
	int hours = (t / 3600) % 24;
	int minutes = (t %3600) / 60;
	int seconds = (t % 3600) % 60;
	cout << hours << " Hours " << minutes << " minutes " << seconds << " seconds ", hours <= 12 ? cout << " AM" : cout << " PM";
}
