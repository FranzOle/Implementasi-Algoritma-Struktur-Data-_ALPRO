#include <iostream>
using namespace std;

int main() {
    int jml;
    cout << "Program Selection Sort" << endl;
    cout << "Masukkan jumlah data: ";
    cin >> jml;

    int data[jml];

    for (int i = 0; i < jml; i++) {
        cout << "Masukkan data ke-" << i + 1 << ": ";
        cin >> data[i];
    }

    for (int i = 0; i < jml - 1; i++) {
        int imin = i;
        for (int j = i + 1; j < jml; j++) {
            if (data[j] < data[imin]) {
                imin = j;
            }
        }

        int atem = data[i];
        data[i] = data[imin];
        data[imin] = atem;
    }

    cout << "hasil pengurtan:" << endl;
    for (int i = 0; i < jml; i++) {
        cout << data[i] << " ";
    }

    return 0;
}
