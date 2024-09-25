#include <iostream>
#include "CHonSo.h"
using namespace std;

int main()
{
    CHonSo ps1, ps2;
    cout << "Nhap hon so thu nhat: " << endl;
    cin >> ps1;
    cout << "Nhap hon so thu hai: " << endl;
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