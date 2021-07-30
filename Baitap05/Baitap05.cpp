// Baitap05.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
    /*
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
    */
    //Bài 4
    /*
    Viết chương trình nhập một số nguyên, tìm bội số của số đó với các số từ 1 đến 20,
    sau đó in kết quả ra màn hình.
    */
    /*
    cout << "Bai 4" << endl;
    int n;
    cout << "Nhap so n: ", cin >> n;
    cout << "Boi so cua " << n << " tu 1->20 la: " << endl;
    for (int i4 = 1; i4 <= 20; i4++)
    {
        cout << n * i4 << endl;
    }

    */
    /*
    //Bài 5
    /*
    //Viết chương trình in bảng cửu chương rút gọn của các số từ 1 đến 100.
  
    cout << "Bai 5" << endl;
    for (int i5 = 1; i5 <= 100; i5++)
    {
        for (int i6 = 1; i6 <= 10; i6++)
        {
            cout << i5 * i6 << " ";
        }
        cout << endl;
    }
    */
    //Bài 6
    //Nhập số nguyên n bất kỳ. Viết chương trình in các số chẵn từ 1 đến n.
   /*
    int n1;
    int count = 0;
    cout << "Bai 6" << endl;
    cout << "Nhap so n: ", cin >> n1;
    for (int i7 = 1; i7 <=n1; i7++)
    {
        if ((i7 % 2) == 0) {
            count = count + 1;
        }
    }
    cout << "Co " << count << " so chan" << endl;
    */
    //Bài 7
    //Nhập số nguyên n bất kỳ. Viết chương trình in các số lẻ từ 1 đến n.
    /*
        int n2;
        int count1 = 0;
        cout << "Bai 7" << endl;
        cout << "Nhap so n: ", cin >> n2;
        for (int i8 = 1; i8 <= n2; i8++)
        {
            if ((i8 % 2) != 0) {
                count1 = count1 + 1;
            }
        }
        cout << "Co " << count1 << " so le";
     */
    //Bài 8
    /*
    Nhập một số n nguyên dương bất kỳ, viết chương trình in 
    các số nguyên tố từ 0 đến n bằng vòng lặp FOR.
    //Số nguyên tố: là số chỉ có 2 ước là 1 và chính nó
    B1 nhập số 20
    B2 chạy vòng for 
    Trong vòng for lấy i chia cho từ 1 đến i
    Nếu i chia được == 2 lần thì xuất ra i
    */
    int n3;
    cout << "Nhap so n: ", cin >> n3;
    for (int i9 = 2; i9 <=n3; i9++)
    {
        int count = 0;
        for (int i10 = 1; i10 <=i9; i10++)
        {
            if ((i9 % i10) == 0) count += 1;
        }
        if (count <= 2) cout << i9 << endl;
    }
}

