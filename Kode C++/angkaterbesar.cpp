#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Program Mencari Data Terbesar" << endl;
    cout << "masukkan jumlah data : ";
    cin >> n;

    int data[n];

    for (int i = 0; i < n; i++) {
        cout << "masukkan data ke-" << i + 1 << ": ";
        cin >> data[i];
    }

    int maks = data[0];

    for (int i = 1; i < n; i++) {
        if (data[i] > maks) {
            maks = data[i];
        }
    }

    cout << "Data terbesar adalah: " << maks << endl;

    return 0;
}
