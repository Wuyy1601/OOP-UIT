#include "CDonThuc.h"

int main()
{
    CDonThuc dt1;
    CDonThuc dt2;

    cout << "Nhap don thuc thu nhat (dt1):" << endl;
    cin >> dt1;

    cout << "Nhap don thuc thu hai (dt2):" << endl;
    cin >> dt2;

    cout << "Don thuc 1: " << dt1 << endl;
    cout << "Don thuc 2: " << dt2 << endl;

    // Kiểm tra toán tử *
    CDonThuc dtMul = dt1 * dt2;
    cout << "Ket qua cua " << dt1 << " * " << dt2 << " = " << dtMul << endl;

    // Kiểm tra toán tử /
    CDonThuc dtDiv = dt1 / dt2;
    cout << "Ket qua cua " << dt1 << " / " << dt2 << " = " << dtDiv << endl;

    CDonThuc dt1_copy = dt1;
    // Kiểm tra toán tử *=
    dt1_copy = dt1; 
    dt1_copy *= dt2;
    cout << "Ket qua cua " << dt1 << " *= " << dt2 << " = " << dt1_copy << endl;

    // Kiểm tra toán tử /=
    dt1_copy = dt1; 
    dt1_copy /= dt2;
    cout << "Ket qua cua " << dt1 << " /= " << dt2 << " = " << dt1_copy << endl;

    return 0;
}
