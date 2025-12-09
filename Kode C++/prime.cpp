#include <iostream>
using namespace std;

int main() {
    cout << "Program mengcek bilangan Prima" << endl;

    int bil;
    bool bilPrima = true;

    cout << "masukkan bilangan: ";
    if (!(cin >> bil)) {
        cerr << "Input tidak valid." << endl;
        return 1;
    }

    if (bil < 2) {
        bilPrima = false;
    } else {
        int k = 2;

        while (k <= bil - 1 && bilPrima) {
            if (bil % k == 0) {
                bilPrima = false;
            }

            if (bilPrima) {
                k++;
            }
        }
    }

    if (bilPrima) {
        cout << "Bilangan prima" << endl;
    } else {
        cout << "Bukan bilangan prima" << endl;
    }

    return 0;
}