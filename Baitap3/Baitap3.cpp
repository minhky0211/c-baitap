// Baitap3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
	//Bài tập 
	/**
	Giả sử bạn là một nhân viên chịu trách nhiệm nhập tên danh sách báo danh của các học sinh đến độ tuổi vào lớp 10.
	Bạn cần viết chương trình C++ để nhập tuổi và in ra kết quả nếu tuổi học sinh đó không đủ điều kiện vào học lớp 10.
	
	int age;
	cout << "Nhap so tuoi: ", cin >> age;
	if (age >= 16 && age <= 18) {
		cout << "Voi so tuoi la: " << age << " Thi sinh da du dieu kien vao lop 10!";
	}
	else
	{
		cout << "Thi sinh khong du dieu kien";
	}
	**/
	//Bài tập
	/**
	Viết chương trình C++ để nhập một số nguyên bất kỳ từ bàn phím
	và in kết quả ra màn hình để nói cho người dùng biết số đó là lớn hay nhỏ hơn 100.
	
	int numberX;
	cout << "Nhap mot so nguyen: ", cin >> numberX;
	if (numberX == 100) {
		cout << "So: " << numberX << " bang 100";
	}
	else if (numberX > 100) {
		cout << "So: " << numberX << " lon hon 100";
	}
	else {
		cout << "So: " << numberX << " be hon 100";
	}
	**/
	//Bài tập
	//Viết một chương trình C++ để nhắc người dùng nhập 3 số nguyên và tìm giá trị lớn nhất.
	/*
	int a, b, c, max;
	cout << "Nhap so nguyen a: ", cin >> a;
	cout << "Nhap so nguyen b: ", cin >> b;
	cout << "Nhap so nguyen c: ", cin >> c;
	if (a == b) {
		if (c > a) {
			max = c;
		}
		else if(b==c)
		{
			max = c;
		}
		else
		{
			max = a;
		}
	}
	if (a > b) {
		if (b > c) {
			max = a;
		}
		else {
			if (a > c) {
				max = a;
			}
			else {
				max = c;
			}
		}
	}
	if (a < b) {
		if (a > c) {
			max = b;
		}
		else
		{
			if (c < b) {
				max = b;
			}
			else
			{
				max = c;
			}
		}
	}
	cout << max;
	*/
	//Bài tập
	/*
	Viết chương trình C++ xếp hạng học lực của học sinh. 
	Chương trình nhập 3 điểm là điểm bài kiểm tra, điểm thi giữa kỳ, điểm thi cuối kỳ và xác định học lực dựa trên nguyên tắc:

	Điểm trung bình >= 9.0 là hạng A.

	Điểm trung bình >=7.0 và < 9.0 là hạng B

	Điểm trung bình >=5.0 và < 7.0 là hạng C

	Điểm trung bình <5.0 là hạng F
	
	double diemKT, diemgKy, diemcKy, dtb;
	cout << "Xep loai hoc luc:" << endl;
	cout << "Nhap diem theo thu tu diem kiem tra, diem giua ky, diem cuoi ky: " << endl, cin >> diemKT >> diemgKy >> diemcKy;
	dtb = (diemKT + diemgKy + diemcKy) / 3;
	if (dtb >= 9) {
		cout << "Hang A";
	}
	else if (dtb >= 7 && dtb < 9) {
		cout << "Hang B";
	}
	else if(dtb >= 5 && dtb < 7)
	{
		cout << "Hang C";
	}
	else
	{
		cout << "Hang F";
	}
	*/
	//Bài tập
	/*
	Viết chương trình C++ để tìm nghiệm của phương trình bậc hai ax2 + bx + c = 0. Theo các nguyên tắc:

	Nếu a và b cùng bằng 0 thì phương trình vô nghiệm.

	Nếu a=0 thì phương trình có một nghiệm là (-c/b).

	Nếu b2-4ac là âm, thì phương trình vô nghiệm.

	Nếu không, phương trình có hai nghiệm.
	
	double a, b, c, delta, x1, x2;
	cout << "Giai phuong trinh bat 2 [ax2 + bx + c = 0]" << endl;
	cout << "Nhap 3 so theo thu tu a,b,c: " << endl, cin >> a >> b >> c;
	delta = (pow(b, 2) - 4 * a * c);
	if (a == 0 && b == 0 || delta < 0) {
		cout << "phuong trinh vo nghiem";
	}
	else if (a == 0) {
		x1 = x2 = -c / b;
		cout << "Phuong trinh co mot nghiem x1 = x2 = " << x1;
	}
	else
	{
		x1 = (-b + sqrt(delta)) / (2 * a);
		x2 = (-b - sqrt(delta)) / (2 * a);
		cout << "Phuong trinh co hai nghiem phan biet: " << endl;
		cout << "X1= " << x1 << endl;
		cout << "X2= " << x2 << endl;
	}
	*/
	//Bài tập
	/*
	Cửa hàng của bạn nhận gửi bán sản phẩm cho một công ty khác và sau mỗi tháng bạn 
	cần tính toán số tiền hoa hồng bạn nhận được. Với mức hoa hồng theo doanh số bán hàng như sau:

	5% nếu tổng doanh số nhỏ hơn hoặc bằng 100 triệu.

	10% nếu tổng doanh số nhỏ hơn hoặc bằng 300 triệu.

	20 % nếu tổng doanh số là lớn hơn 300 triệu.

	Dựa vào dữ liệu trên, bạn viết chương trình C++ để tính hoa hồng đại lý bạn sẽ nhận được.
	
	double doanhthu, tienhoahong;
	cout << "Tinh toan so hoa hong moi thang" << endl;
	cout << "Nhap so doanh thu: ", cin >> doanhthu;
	cout << "So doanh thu: " << doanhthu << " trieu VND" << endl;
	if (doanhthu <= 100) {
		cout << "Hoa hong cua ban la 5%" << endl;
		tienhoahong = ((double)5 / 100) * doanhthu;
		cout << "So tien hoa hong: " << tienhoahong;
	}
	else if (doanhthu >= 100 && doanhthu < 300) {
		cout << "Hoa hong cua ban la 10%" << endl;
		tienhoahong = ((double)10 / 100) * doanhthu;
		cout << "So tien hoa hong: " << tienhoahong;
	}
	else
	{
		cout << "Hoa hong cua ban la 20%" << endl;
		tienhoahong = ((double)20 / 100) * doanhthu;
		cout << "So tien hoa hong: " << tienhoahong;
	}
	*/
	//Bài tập
	/*
	Viết chương trình C++ để tính cước điện thoại bàn cho một hộ gia đình với các thông số như sau:

	Phí thuê bao bắt buộc là 25 nghìn.

	600 đồng cho mỗi gọi của 50 phút đầu tiên.

	400 đồng cho mỗi phút gọi của 150 phút tiếp theo.

	200 đồng cho bất kỳ mỗi phút nào sau 200 phút đầu tiên.
	*/
	int fixedCost = 25000;
	int sophut;
	int tongchiphi, phi;
	cout << "Tinh cuoc phi dien thoai ban" << endl;
	cout << "Nhap so phut ban da su dung: ", cin >> sophut;
	if (sophut <= 50) {
		phi = 600 * sophut;
	}
	else if (sophut > 50 && sophut <= 199) {
		phi = 400 * (sophut - 50) + 600 * 50;
	}
	else
	{
		phi = 200 * (sophut - 200) + 400 * (sophut - 50) + 600 * 50;
	}
	tongchiphi = phi + fixedCost;
	cout << "Chi phi: " << tongchiphi;
}

