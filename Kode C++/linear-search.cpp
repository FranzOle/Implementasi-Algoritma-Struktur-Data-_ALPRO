#include <iostream>
using namespace std;

int main() {
    int jml;
    cout << "Program Pencarian";
    cout << "Masukkan jumlah data: ";
    cin >> jml;

    int data[jml];

    for (int i = 0; i < jml; i++) {
        cout << "masukkan data ke-" << i + 1 << ": ";
        cin >> data[i];
    }

    int x;
    cout << "masukkan data yang dicari: ";
    cin >> x;
    int nomr = -1;

    for (int i = 0; i < jml; i++) {
        if (data[i] == x) {
            nomr = i;
            break;
        }
    }

    if (nomr != -1) {
        cout << "dat ditemukan pada urutan ke " << nomr << endl;
    } else {
        cout << "Data tidak ditemukan" << endl;
    }

    return 0;
}
