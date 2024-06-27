#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
    int m;
    int n;
    int hasil = 1;

    cout << " Menghitung hasil m pangkat n\n";
    cout << "===================================\n";
    cout << " Masukkan nilai m = "; cin >> m;
    cout << " Masukkan nilai n = "; cin >> n;

    for (int i = 1; i <= n;i++)
    {
        hasil = hasil * m;
    }

    cout << "====================================\n";
    cout << " Hasil " << m << " pangkat " << n;
    cout << " adalah " << hasil;
    getch();
}
