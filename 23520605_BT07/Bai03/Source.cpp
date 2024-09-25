#include <iostream>
#include "CDiem.h"
using namespace std;

int main()
{
    CDiem A, B;
    cout << "Nhap diem thu nhat: " << endl;
    cin >> A;
    cout << "Nhap diem thu hai: " << endl;
    cin >> B;
    if (A > B) {
        cout << A << " > " << B << endl;
    }
    if (A >= B) {
        cout << A  << " >= " << B << endl;
    }
    if (A < B) {
        cout << A << " < " << B << endl;
    }
    if (A <= B) {
        cout << A << " <= " << B << endl;
    }
    if (A == B) {
        cout << A << " == " << B << endl;
    }
    else {
        cout << A << " != " << B << endl;
    }
    return 0;
}