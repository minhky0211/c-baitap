// HelloWorld.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    //Khai báo biến
    int x = 0;
    cout << "Hello World!\n";
    cout << "Nhap so x: ", cin >> x;
    cout << "Dia chi cua bien X: " << &x <<"\n";
    //Tính diểm trung bình của Toán và Văn
    double toan, van, dtb;
    cout << "Nhap diem TOAN: ", cin >> toan;
    cout << "Nhap diem VAN: ", cin >> van;
    dtb = (toan * 2 + van) / 3;
    cout << "Diem trung binh cua hai mon la: " << dtb << endl;
    /*
    In bài thơ sử dụng các kí hiệu đặc biệt
    */
    cout << "Quanh nam lan loi bon mua\n";
    cout << "Nuoi du nam con voi mot chong";
    cout << "\n";
    cout << "\tLan loi than co khi quang vang";
    cout << endl;
    cout << "\t\"Eo seo\" mat nuoc buoi do dong";
    return 0;
}

