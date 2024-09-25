#include "CDaThuc.h"

int main()
{
    CDaThuc dt1, dt2;

    cout << "Nhap da thuc thu nhat (dt1):" << endl;
    cin >> dt1;
    cout << "Nhap da thuc thu hai (dt2):" << endl;
    cin >> dt2;

    cout << "Da thuc 1: " << dt1 << endl;
    cout << "Da thuc 2: " << dt2 << endl;

    // Cộng hai đa thức
    CDaThuc dtAdd = dt1 + dt2;
    cout << "Ket qua cua " << dt1 << " + " << dt2 << " = " << dtAdd << endl;

    // Trừ hai đa thức
    CDaThuc dtSub = dt1 - dt2;
    cout << "Ket qua cua " << dt1 << " - (" << dt2 << ") = " << dtSub << endl;

    // Toán tử cộng gán
    CDaThuc dt1_copy = dt1;
    dt1_copy += dt2;
    cout << "Ket qua cua " << dt1 << " += " << dt2 << " = " << dt1_copy << endl;

    // Toán tử trừ gán
    dt1_copy = dt1;
    dt1_copy -= dt2;
    cout << "Ket qua cua " << dt1 << " -= " << dt2 << " = " << dt1_copy << endl;

    // Nhân hai đa thức
    CDaThuc dtMul = dt1 * dt2;
    cout << "Ket qua cua " << dt1 << " * " << dt2 << " = " << dtMul << endl;

    // Toán tử nhân gán
    dt1_copy = dt1; // Reset lại bản sao của dt1
    dt1_copy *= dt2;
    cout << "Ket qua cua " << dt1 << " *= " << dt2 << " = " << dt1_copy << endl;
    
    //Tooán tử chia
    CDaThuc Chia = dt1 / dt2;
    cout << "Ket qua cua " << dt1 << " / " << dt2 << " = " << Chia << endl;

    //Toán tử gán chia
    dt1_copy = dt1;
    dt1_copy /= dt2;
    cout << "Ket qua cua " << dt1 << " /= " << dt2 << " = " << dt1_copy << endl;
    return 0;
}
