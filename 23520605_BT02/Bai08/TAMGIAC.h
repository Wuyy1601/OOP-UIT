#pragma once
class DIEM
{
private:
	float x;
	float y;
public:
	void Nhap();
	void Xuat();
	float KhoangCach(DIEM);
	DIEM TrongTam(DIEM, DIEM, DIEM);
};


class TAMGIAC
{
public:
	DIEM A;
	DIEM B;
	DIEM C;
	void Nhap();
	void Xuat();
	float ChuVi();
	float DienTich();

};

