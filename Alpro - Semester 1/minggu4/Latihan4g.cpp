//NIM: A12.2023.07058
//NAMA: FICO ALDI SAPUTRO

#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    char kode;
    system("cls");
    cout<<"masukan kode barang [A..C] : ";
    cin>>kode;

    switch(kode)
    {
    case 'A' :
    case 'a' :
        cout <<"Alat Olah Raga";
        break;
    case 'B' :
    case 'b' :
        cout <<"Alat Elektronik";
        break;
    case 'C' :
    case 'c' :
        cout <<"Alat Musik";
        break;
    case 'D' :
    case 'd' :
        cout <<"Bisma";
        break;
    default:
        cout<<"Anda Salah Memasukan Kode";
    }
    return 0;
}
