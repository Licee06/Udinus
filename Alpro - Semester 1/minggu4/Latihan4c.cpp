//NIM: A12.2023.07058
//NAMA: FICO ALDI SAPUTRO

#include <iostream>
#include <conio.h>

using namespace std;

int main ()
{
    int belanja = 0;
    float diskon;
    float bayar;

    cout << "Belanja        : ";
    cin >> belanja;
    if (belanja > 10000000)
    {
        diskon = 0.10 * belanja;
    }
    else
    {
        diskon = 0.05 * belanja;
    }
    bayar = belanja - diskon;
    cout << "diskon         : " << diskon << endl;
    cout << "total bayar    : " << bayar << endl;
    return 0;
}
