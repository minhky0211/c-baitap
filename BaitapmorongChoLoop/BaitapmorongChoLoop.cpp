﻿// BaitapmorongChoLoop.cpp : This file contains the 'main' function. Program execution begins and ends there.
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
    int len;
    cout << "Nhap do dai tam giac", cin >> len;
    for (int i = 0; i < len; i++)
    {
        for (int j= 0; j <= i; j++)
        {
            if (i==j || j==0 || i==len-1)
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
}
