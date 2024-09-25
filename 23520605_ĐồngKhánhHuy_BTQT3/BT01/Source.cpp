//Mã số sinh viên:23520605
//Họ và tên: Đồng Khánh Huy
//Ngày sinh:16/01/2005
//Lớp:TMĐT2023.1
#include "QuanLySVDH.h"
#include "QuanLySVCD.h"
#include <vector>
using namespace std;

void NhapDanhSachSVDH(vector<SVDH>& DanhSachSVDH)
{
    int n;
    cout << "Nhap so luong sinh vien dai hoc: ";
    cin >> n;
    cin.ignore();
    for (int i = 0; i < n; ++i) {
        SVDH sv;
        cout << "Nhap thong tin cho sinh vien thu " << i + 1 << ":\n";
        cin >> sv;
        cin.ignore();
        DanhSachSVDH.push_back(sv);
    }
}

void XuatDanhSachSinhVienDH(const vector<SVDH>& DanhSach) {
    cout << "Danh sach sinh vien dai hoc: " << endl;
    for (const auto& sv : DanhSach) {
        cout << sv << endl;
    }
}

int DemSinhVienDuDieuKienDH(const vector<SVDH>& DanhSach) {
    int count = 0;
    for (const auto& sv : DanhSach) {
        if (sv.DuDieuKienTotNghiep()) {
            count++;
        }
    }
    return count;
}

SVDH timSinhVienCoDiemTBCaoNhat(const vector<SVDH>& DanhSach) {
    if (DanhSach.empty()) {
        return SVDH();
    }

    SVDH svMaxDTB = DanhSach[0];

    for (const auto& sv : DanhSach) {
        if (sv.layDTB() > svMaxDTB.layDTB())
        {
            svMaxDTB = sv;
        }
    }

    return svMaxDTB;
}

void NhapDanhSachSVCD(vector<SVCD>& DanhSachSVCD)
{
    int n;
    cout << "Nhap so luong sinh vien cao dang: ";
    cin >> n;
    cin.ignore();
    for (int i = 0; i < n; ++i) {
        SVCD sv;
        cout << "Nhap thong tin cho sinh vien thu " << i + 1 << ":\n";
        cin >> sv;
        cin.ignore();
        DanhSachSVCD.push_back(sv);
    }
}

void XuatDanhSachSinhVienCD(const vector<SVCD>& DanhSach) {
    cout << "Danh sach sinh vien: " << endl;
    for (const auto& sv : DanhSach) {
        cout << sv << endl;
    }
}

int DemSinhVienDuDieuKienCD(const vector<SVCD>& DanhSach) {
    int count = 0;
    for (const auto& sv : DanhSach) {
        if (sv.DuDieuKienTotNghiepCD()) {
            count++;
        }
    }
    return count;
}

int main() {
    vector<SVDH> DanhSachSVDH;
    vector<SVCD> DanhSachSVCD;
    int ChucNang;
    cout << "Chon chuc nang :" << endl;
    cout << "1: Nhap vao danh sach sinh vien." << endl;
    cout << "2: Xuat danh sach sinh vien." << endl;
    cout << "3: Cho biet bao nhieu sinh vien du dieu kien tot nghiep." << endl;
    cout << "4: Cho biet sinh vien dai hoc co DTB cao nhat." << endl;
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
            NhapDanhSachSVDH(DanhSachSVDH);
            NhapDanhSachSVCD(DanhSachSVCD);
        }
        if (ChucNang == 2)
        {
            XuatDanhSachSinhVienDH(DanhSachSVDH);
            XuatDanhSachSinhVienCD(DanhSachSVCD);
        }
        if (ChucNang == 3)
        {
            cout << "So luong sinh vien du dieu kien tot nghiep: " << DemSinhVienDuDieuKienDH(DanhSachSVDH) + DemSinhVienDuDieuKienCD(DanhSachSVCD) << endl;
        }
        if (ChucNang == 4)
        {
            cout << "Sinh vien dai hoc co DTB cao nhat:\n" << timSinhVienCoDiemTBCaoNhat(DanhSachSVDH);
        }
        cout << "Chon chuc nang :" << endl;
        cout << "1: Nhap vao danh sach sinh vien." << endl;
        cout << "2: Xuat danh sach sinh vien." << endl;
        cout << "3: Cho biet bao nhieu sinh vien du dieu kien tot nghiep." << endl;
        cout << "4: Cho biet sinh vien dai hoc co DTB cao nhat." << endl;
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