#include <iostream>

using namespace std;

int main() {
    int nilai_awal, nilai_akhir, hasil = 0;

    // Input nilai awal dan nilai akhir
    cout << "Masukkan nilai awal: ";
    cin >> nilai_awal;
    cout << "Masukkan nilai akhir: ";
    cin >> nilai_akhir;

    // Iterasi untuk menghitung akumulasi bilangan genap
    for (int i = nilai_awal; i <= nilai_akhir; ++i) {
        if (i % 2 == 0) {
            hasil += i;
            cout << i;
            if (i != nilai_akhir && i != nilai_akhir - 1) {
                cout << " + ";
            }
        }
    }

    cout << " = " << hasil << endl;

    return 0;
}
