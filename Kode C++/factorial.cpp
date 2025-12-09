#include <iostream>
using namespace std;

int faktorial(int n) {
    if (n <= 1) {
        return 1;
    } else {
        return n * faktorial(n - 1);
    }
}

int main() {
    int bil;
    cout << "Program Faktorial" << endl;
    cout << "Masukkan bilangan: ";
    cin >> bil;
    int faktorialisme = faktorial(bil);

    cout << "Faktorial dari " << bil << " = " << faktorialisme << endl;

    return 0;
}
