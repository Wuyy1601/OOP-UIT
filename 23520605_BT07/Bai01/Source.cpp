#include <iostream>
#include "CPhanSo.h"
using namespace std;

int main()
{
    CPhanSo ps1, ps2;
    cout << "Nhap phan so thu nhat: " << endl;
    cin >> ps1;
    cout << "Nhap phan so thu hai: " << endl;
    cin >> ps2;
    if (ps1 > ps2) {
        cout << ps1 << " > " << ps2 << endl;
    }
    if (ps1 >= ps2) {
        cout << ps1 << " >= " << ps2 << endl;
    }
    if (ps1 < ps2) {
        cout << ps1 << " < " << ps2 << endl;
    }
    if (ps1 <= ps2) {
        cout << ps1 << " <= " << ps2 << endl;
    }
    if (ps1 == ps2) {
        cout << ps1 << " == " << ps2 << endl;
    }
    else {
        cout << ps1 << " != " << ps2 << endl;
    }
    return 0;
}