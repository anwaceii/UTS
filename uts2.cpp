
#include <iostream>
using namespace std;

int main() {

    int tinggi;
    cout << "Masukkan Angka: ";
    cin >> tinggi;

    for (int i = 1; i <= tinggi; i++) {
        for (int j = i; j < tinggi; j++) {
            cout << "";
        }
        for (int k = 1; k <= (1 * i); k++) {
            cout <<"*";
        }
        cout << endl;
    }

    return 0;
}
