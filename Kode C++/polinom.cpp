#include <iostream>
using namespace std;

float polinom(float a[], int n, float t) {
    float p = 0;
    float pangkat = 1;

    for (int i = n; i >= 0; i--) {
        pangkat = 1;

        for (int j = 1; j <= i; j++) {
            pangkat = pangkat * t;
        }

        p = p + a[i] * pangkat;
    }

    return p;
}

int main() {
    int n;
    cout << "Program Menghitung Nilai Polinomial" << endl;
    cout << " masukkan angka polinom (n): ";
    cin >> n;

    cout << "Masukan kofisin a sampai a " << n << " :" << endl;

    float a[n + 1];
    for (int i = 0; i <= n; i++) {
        cout << "a" << i << ": ";
        cin >> a[i];
    }

    float t;
    cout << "Masukkan nilai x (t): ";
    cin >> t;

    float hasil = polinom(a, n, t);

    cout << "Nilai polinom di x = " << t << " yaitu =" << hasil << endl;

    return 0;
}
