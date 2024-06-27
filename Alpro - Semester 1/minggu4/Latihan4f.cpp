//NIM: A12.2023.07037
//NAMA: Asher Dary Radiany

#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    int hari;
    cout << "masukan angka 1 sd 7 : ";
    cin >> hari;
    cout << "nama hari               : ";
    switch (hari)
    {
    case 1:
        cout << "senin";
        break;
    case 2:
        cout << "selasa";
        break;
    case 3:
        cout << "rabu";
        break;
    case 4:
        cout << "kamis";
        break;
    case 5:
        cout << "jumat";
        break;
    case 6:
        cout << "sabtu";
        break;
    case 7:
        cout << "minggu";
        break;
    default:
        cout << "bukan 1, 2... atau 7";
    }
    cout << endl;
    return 0;
}
