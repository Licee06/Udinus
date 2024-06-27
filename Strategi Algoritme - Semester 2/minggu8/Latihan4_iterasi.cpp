#include <iostream>
#include <conio.h>
using namespace std;

int pangkatrekursif(int x, int y)
{
    if (y==0)
        return 1 ;
    else
        return x * pangkatrekursif(x,y-1);
}

int main()
{
    int x,y;

    cout << "FUNGSI REKURSIF UNTUK MENGHITUNG PANGKAT\n";
    cout << "========================================\n";
    cout << endl;
    cout << "Masukan Nilai X = ";
    cin >> x;

    cout << "Msukkan Nilai Y = ";
    cin >> y;

    cout << "=========================================\n";
    cout << x << " Dipangkatkan " << y << " = ";
    cout << pangkatrekursif(x,y) << endl;
    getch();
}
