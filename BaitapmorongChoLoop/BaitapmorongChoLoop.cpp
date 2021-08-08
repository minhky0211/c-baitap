// BaitapmorongChoLoop.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
    //Lệnh continue
    /*
    Nhập vào 1 số N tính tổng từ 1->N trừ 2 và 4
    
    int n, result=0;
    cout << "Nhap so nguyen duong n: ", cin >> n;
    for (int i = 1; i <=n; i++)
    {
        if (i==2 || i==4)
        {
            continue;
        }
        result += i;
    }
    cout << "Sum: " << result;
    */
    //Vẽ tam giác có đường chéo chính (i=j)
    /*
    int len;
    cout << "Nhap do dai tam giac", cin >> len;
    for (int i = 0; i < len; i++)
    {
        for (int j= 0; j <= i; j++)
        {
            if (i==j || j==0 || i == len - 1)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
           
        }
        cout << endl;
    }
    */
    //Tính dãy số
    /*
    int n, x, mau = 1;
    long ketqua=0;
    cout << "Nhap n: ", cin >> n;
    cout << "Nhap x: ", cin >> x;
    for (int i = 1; i <= n; i++)
    {
        double tu = pow(x, i);
        mau *= i;
        ketqua += (tu / mau);
    }
    cout << ketqua;
    */
    //Kiểm tra số n nguyên dương nhập vào có phải số hoàn thiện hay không
    /*
    * Một số n nguyên dương là hoàn thiện khi
    * Các ước của số trừ chính n có tổng bằng n
    * ước của 6 là 1 2 3
    * tổng 1 + 2 + 3 = 6 thì n là số hoàn thiện
    int n;
    int tong = 0;

    cout << "Nhap so n nguyen duong: ", cin >> n;
    for (int i = 1; i < n; i++)
    {
        if (n%i==0)
        {
            tong += i;
        }
    }
    if (tong==n)
    {
        cout << "day la so hoan thien";
    }
    else {
        cout << "day khong phai la so hoan thien";
    }
    */
    //Tính tổng các chữ số trong 1 số
    //123456 -> 1 + 2 + 3 + 4 + 5 + 6
    int n, tong = 0;
    cout << "Nhap so n nguyen duong: ", cin >> n;
    while (n>0) {
        int temp = n % 10;
        tong += temp;
        n /= 10;
    }
    cout << tong;
}

