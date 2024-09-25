#pragma once

class DIEM
{
	private:
		float x;
		float y;
	public:
		void Nhap();
		void Xuat();
};



class DuongTron
{
public:
		DIEM O;
		float R;
		void Nhap();
		void Xuat();
		float ChuVi();
		float DienTich();
};

