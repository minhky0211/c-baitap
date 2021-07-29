// Baitap05.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
    //Bài 1
    //Viết chương trình in các số từ 1 đến 1000 theo thứ tự tăng dần. -
    int i = 1;
    cout << "Bai 1" << endl;
    while (i<=1000)
    {
        cout << i << endl;
        i++;
    }
   
    //Bài 2
    //Viết chương trình in các số từ 1 đến 1000 theo thứ tự giảm dần.
    int i2 = 1000;
    cout << "Bai 2" << endl;
    do {
        cout << i2 << endl;
        i2--;
    } while (i2 >= 1);
    //Bài 3
    //Viết chương trình in bảng số từ 1 đến 200.
    cout << "Bai 3" << endl;
    int i3 = 1;
    for (i3; i3 <= 200; i3++)
    {
        cout << i3 << " ";
    }
    cout << endl;
    //Bài 4
    /*
    Viết chương trình nhập một số nguyên, tìm bội số của số đó với các số từ 1 đến 20,
    sau đó in kết quả ra màn hình.
    */
    cout << "Bai 4";
    int n;
    cout << "Nhap so n: ", cin >> n;
    cout << "Boi so cua " << n << " tu 1->20 la: " << endl;
    for (int i4 = 1; i4 <= 20; i4++)
    {
        cout << n * i4 << endl;
    }
    //Bài 5
    /*
    Viết chương trình in bảng cửu chương rút gọn của các số từ 1 đến 100.
    */
    cout << "Bai 5" << endl;
    for (int i5 = 1; i5 <= 100; i5++)
    {
        for (int i6 = 1; i6 <= 10; i6++)
        {
            cout << i5 * i6 << " ";
        }
        cout << endl;
    }
}

