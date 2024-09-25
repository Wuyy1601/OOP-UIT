



//Mã số sinh viên:23520605
//Họ và tên: Đồng Khánh Huy
//Ngày sinh:16/01/2005
//Lớp:TMĐT2023.1
#include "SachGiaoKhoa.h"
#include "SachThamKhao.h"
#include <vector>

void NhapDSSGK(vector<SGK>& DSSGK)
{
	int n;
	cout << "So loai sach giao khoa: ";
	cin >> n;
	cin.ignore();
	for (int i = 0; i < n; i++)
	{
		SGK S;
		cout << "Nhap thong tin loai sach thu " << i + 1 << endl;
		cin >> S;
		cin.ignore();
		DSSGK.push_back(S);
	}
}

void XuatDSSGK(const vector<SGK>& DSSGK)
{
	cout << "Danh sach SGK: " << endl;
	for (const auto& s : DSSGK)
	{
		cout << s << endl;
	}
}

void TimThongTinSGK(const vector<SGK>& DSSGK, string NXBCanTim)
{
	for (const auto& s : DSSGK)
	{
		if (s.LayTenNXB() == NXBCanTim)
			cout << s << endl;
	}
}

void ThanhTienSGK(const vector<SGK>& DSSGK)
{
	float sum = 0;
	for (const auto& s : DSSGK)
	{
		sum += s.ThanhTienSGK();
	}
	cout << "Tong thanh tien cua loai SGK: " << sum << endl;
}

SGK ThanhTienSGKMIN(const vector<SGK>& DSSGK)
{
	if (DSSGK.empty())
		return SGK();

	SGK SGKMIN = DSSGK[0];

	for (const auto& s : DSSGK) {
		if (s.ThanhTienSGK() < SGKMIN.ThanhTienSGK())
		{
			SGKMIN = s;;
		}
	}

	return SGKMIN;
}
vector<SGK> DSThanhTienSGKMIN(const vector<SGK>& DSSGK)
{
	vector<SGK> min;
	SGK SGKMIN = ThanhTienSGKMIN(DSSGK);
	for (const auto& s : DSSGK) {
		if (s.ThanhTienSGK() == SGKMIN.ThanhTienSGK())
		{
			min.push_back(s);
		}
	}
	return min;
}

void NhapDSSTK(vector<STK>& DSSTK)
{
	int n;
	cout << "So loai sach tham khao: ";
	cin >> n;
	cin.ignore();
	for (int i = 0; i < n; i++)
	{
		STK S;
		cout << "Nhap thong tin loai sach thu " << i + 1 << endl;
		cin >> S;
		cin.ignore();
		DSSTK.push_back(S);
	}
}

void XuatDSSTK(const vector<STK>& DSSTK)
{
	cout << "Danh sach STK: " << endl;
	for (const auto& s : DSSTK)
	{
		cout << s << endl;
	}
}

void ThanhTienSTK(const vector<STK>& DSSTK)
{
	float sum1 = 0;
	for (const auto& s : DSSTK)
	{
		sum1 += s.ThanhTienSTK();
	}
	cout << "Tong thanh tien cua loai STK: " << sum1 << endl;
}

STK ThanhTienSTKMIN(const vector<STK>& DSSTK)
{
	if (DSSTK.empty())
		return STK();

	STK STKMIN = DSSTK[0];

	for (const auto& s : DSSTK) {
		if (s.ThanhTienSTK() < STKMIN.ThanhTienSTK())
		{
			STKMIN = s;;
		}
	}
	return STKMIN;
}

vector<STK> DSThanhTienSTKMIN(const vector<STK>& DSSTK)
{
	vector<STK> min;
	STK STKMIN = ThanhTienSTKMIN(DSSTK);
	for (const auto& s : DSSTK) {
		if (s.ThanhTienSTK() == STKMIN.ThanhTienSTK())
		{
			min.push_back(s);
		}
	}
	return min;
}

int main()
{
	vector<SGK> DSSGK;
	vector<STK> DSSTK;
	int ChucNang;
	cout << "Chon chuc nang :" << endl;
	cout << "1: Nhap vao danh sach SGK va STK cua thu vien truong." << endl;
	cout << "2: Xuat danh sach SGK va STK cua thu vien truong." << endl;
	cout << "3: Tinh thanh tien thu vien phai tra cho tung loai sach va hien thi nhung sach nao co tien phai tra it nhat." << endl;
	cout << "4: Tim thong tin cac sach giao khoa cua nha xuat ban co ten do nguoi dung nhap vao." << endl;
	cout << "0 : Ket thuc chuong trinh." << endl;
	cout << "Chuc nang: ";
	cin >> ChucNang;
	if (ChucNang == 0)
	{
		cout << "Ket thuc chuong trinh." << endl;
		return 0;
	}
	while (1 <= ChucNang <= 4)
	{
		if (ChucNang == 1)
		{
			NhapDSSGK(DSSGK);
			NhapDSSTK(DSSTK);
		}

		if (ChucNang == 2)
		{
			XuatDSSGK(DSSGK);
			XuatDSSTK(DSSTK);
		}

		if (ChucNang == 3)
		{
			ThanhTienSGK(DSSGK);
			ThanhTienSTK(DSSTK);
			cout << "Nhung sach co thanh tien phai tra it nhat: " << endl;
			SGK SGKMIN = ThanhTienSGKMIN(DSSGK);
			STK STKMIN = ThanhTienSTKMIN(DSSTK);
			if (STKMIN.ThanhTienSTK() < SGKMIN.ThanhTienSGK())
				XuatDSSTK(DSThanhTienSTKMIN(DSSTK));
			if (STKMIN.ThanhTienSTK() > SGKMIN.ThanhTienSGK())
				XuatDSSGK(DSThanhTienSGKMIN(DSSGK));
			if (STKMIN.ThanhTienSTK() == SGKMIN.ThanhTienSGK())
			{
				XuatDSSTK(DSThanhTienSTKMIN(DSSTK));
				XuatDSSGK(DSThanhTienSGKMIN(DSSGK));
			}
		}
		if (ChucNang == 4)
		{
			string TenNXB;
			cin.ignore();
			getline(cin, TenNXB);
			TimThongTinSGK(DSSGK, TenNXB);
		}
		cout << "Chon chuc nang :" << endl;
		cout << "1: Nhap vao danh sach SGK va STK cua thu vien truong." << endl;
		cout << "2: Xuat danh sach SGK va STK cua thu vien truong." << endl;
		cout << "3: Tinh thanh tien thu vien phai tra cho tung loai sach va hien thi nhung sach nao co tien phai tra it nhat." << endl;
		cout << "4: Tim thong tin cac sach giao khoa cua nha xuat ban co ten do nguoi dung nhap vao." << endl;
		cout << "0 : Ket thuc chuong trinh." << endl;
		cout << "Chuc nang: ";
		cin >> ChucNang;
		if (ChucNang == 0)
		{
			cout << "Ket thuc chuong trinh." << endl;
			return 0;
		}
	}
	return 0;
}

