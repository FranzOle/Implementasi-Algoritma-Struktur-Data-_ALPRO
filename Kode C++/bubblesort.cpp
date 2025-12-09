#include <iostream>
using namespace std;

int main() {
    int jml;
    cout << "\n Program Bubble Sort \n";
    cout << "Masukkan jumlah data: ";
    cin >> jml;
    int data[jml];

    for (int i = 0; i < jml; i++) {
        cout << "Masukkan data ke-" << i + 1 << ": ";
        cin >> data[i];
    }

    for (int i = 0; i < jml; i++) {
        for (int j = 0; j < jml - i - 1; j++) {
            if (data[j] > data[j + 1]) {
                int temp = data[j];
                data[j] = data[j + 1];
                data[j + 1] = temp;
            }
        }
    }

    cout << "Data stlh di bubble sort:\n";
    for (int i = 0; i <jml; i++) {
        cout << data[i];
    }

    return 0;
}
