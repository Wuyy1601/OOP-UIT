#include "CSoPhuc.h"

int main()
{

    CSoPhuc sp1;
    CSoPhuc sp2;

    cout << "Nhap so phuc thu nhat (sp1):" << endl;
    cin >> sp1;

    cout << "Nhap so phuc thu hai (sp2):" << endl;
    cin >> sp2;

    cout << "So phuc 1: " << sp1 << endl;
    cout << "So phuc 2: " << sp2 << endl;


    // Kiểm tra toán tử +
    CSoPhuc spAdd = sp1 + sp2;
    cout << "Ket qua cua " << sp1 << " + " << sp2 << " = " << spAdd << endl;

    // Kiểm tra toán tử -
    CSoPhuc spSub = sp1 - sp2;
    cout << "Ket qua cua " << sp1 << " - " << sp2 << " = " << spSub << endl;

    // Kiểm tra toán tử *
    CSoPhuc spMul = sp1 * sp2;
    cout << "Ket qua cua " << sp1 << " * " << sp2 << " = " << spMul << endl;

    // Kiểm tra toán tử /
    CSoPhuc spDiv = sp1 / sp2;
    cout << "Ket qua cua " << sp1 << " / " << sp2 << " = " << spDiv << endl;

    // Kiểm tra toán tử +=
    CSoPhuc sp1_copy = sp1;
    sp1_copy += sp2;
    cout << "Ket qua cua " << sp1 << " += " << sp2 << " = " << sp1_copy << endl;

    // Kiểm tra toán tử -=
    sp1_copy = sp1;
    sp1_copy -= sp2;
    cout << "Ket qua cua " << sp1 << " -= " << sp2 << " = " << sp1_copy << endl;

    // Kiểm tra toán tử *=
    sp1_copy = sp1; 
    sp1_copy *= sp2;
    cout << "Ket qua cua " << sp1 << " *= " << sp2 << " = " << sp1_copy << endl;

    // Kiểm tra toán tử /=
    sp1_copy = sp1; 
    sp1_copy /= sp2;
    cout << "Ket qua cua " << sp1 << " /= " << sp2 << " = " << sp1_copy << endl;


    return 0;
}
