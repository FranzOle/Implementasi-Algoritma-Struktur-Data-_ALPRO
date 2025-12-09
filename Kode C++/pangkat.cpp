#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int a, n;
    cout << "Program Perpangkatan" << endl;
    cout << "Masukan bilangan: ";
    cin >> a;
    cout << "Masukkan pangkat: ";
    cin >> n;

    cout << "Hasil = " << pow(a, n) << endl;

    return 0;
}
