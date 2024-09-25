#include <iostream>
using namespace std;
#include "CMay.h"

int main()
{
	CMay M;
	M.Nhap();
	M.Xuat();
	float Tien = M.TinhTien();
	cout << "Tong tien cua may: " << Tien << endl;
	cout << "Nhap ma so chi tiet can tim: ";
	string ms;
	cin >> ms;
	CChiTiet* kq = M.TimKiem(ms);
	if (kq != nullptr)
	{
		cout << "Tim thay !!!" << endl;
		kq->Xuat();
	}
	else
	{
		cout << "Khong tim thay !!!" << endl;
	}

	cout << "So luong chi tiet don cua may: " << M.DemChiTietDon() << endl;
	return 0;
}