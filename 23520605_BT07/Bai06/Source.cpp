#include <iostream>
#include "CDuongTron.h"
using namespace std;

int main()
{
    CDuongTron A, B;
    cout << "Nhap duong tron thu nhat: " << endl;
    cin >> A;
    cout << A;
    cout << "Nhap duong tron thu hai: " << endl;
    cin >> B;
    cout << B;
    if (A > B) {
        cout << "Duong tron thu nhat > duong tron thu hai" << endl;
    }
    if (A >= B) {
        cout << "Duong tron thu nhat >= duong tron thu hai" << endl;
    }
    if (A < B) {
        cout << "Duong tron thu nhat < duong tron thu hai" << endl;
    }
    if (A <= B) {
        cout << "Duong tron thu nhat <= duong tron thu hai" << endl;
    }
    if (A == B) {
        cout << "Duong tron thu nhat == duong tron thu hai" << endl;
    }
    else {
        cout << "Duong tron thu nhat != duong tron thu hai" << endl;
    }
    return 0;
}