#include "CPhanSo.h"

int main()
{
    // Khai báo các phân số để kiểm tra
    CPhanSo ps1; // 3/4
    CPhanSo ps2; // 2/5

    // Kiểm tra toán tử >>
    cout << "Nhap phan so thu nhat (ps1):" << endl;
    cin >> ps1;

    cout << "Nhap phan so thu hai (ps2):" << endl;
    cin >> ps2;

    CPhanSo psAdd = ps1 + ps2;
    cout << "Ket qua cua " << ps1 << " + " << ps2 << " = " << psAdd << endl;

    CPhanSo psSub = ps1 - ps2;
    cout << "Ket qua cua " << ps1 << " - " << ps2 << " = " << psSub << endl;

    CPhanSo psMul = ps1 * ps2;
    cout << "Ket qua cua " << ps1 << " * " << ps2 << " = " << psMul << endl;

    CPhanSo psDiv = ps1 / ps2;
    cout << "Ket qua cua " << ps1 << " / " << ps2 << " = " << psDiv << endl;

    CPhanSo ps1_copy = ps1;
    ps1_copy += ps2;
    cout << "Ket qua cua " << ps1 << " += " << ps2 << " = " << ps1_copy << endl;

    ps1_copy = ps1; 
    ps1_copy -= ps2;
    cout << "Ket qua cua " << ps1 << " -= " << ps2 << " = " << ps1_copy << endl;

    ps1_copy = ps1;
    ps1_copy *= ps2;
    cout << "Ket qua cua " << ps1 << " *= " << ps2 << " = " << ps1_copy << endl;

    ps1_copy = ps1; 
    ps1_copy /= ps2;
    cout << "Ket qua cua " << ps1 << " /= " << ps2 << " = " << ps1_copy << endl;

    CPhanSo psInc = ps1; 
    ++psInc;
    cout << "Ket qua cua ++" << ps1 << " = " << psInc << endl;

    CPhanSo psDec = ps1;
    --psDec;
    cout << "Ket qua cua --" << ps1 << " = " << psDec << endl;

    return 0;
}
