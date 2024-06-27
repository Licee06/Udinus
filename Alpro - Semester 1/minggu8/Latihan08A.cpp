//NAMA:FICO ALDI SAPUTRO
//NIM:A12.2023.07058

#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <iomanip>

using namespace std;

int main()
{
    struct
    {
        char nim[5];
        string nama;
        float nilai;
    } mahasiswa;
    cout << "Data Mahasiswa\n";
    cout << "=================================\n";
    cout << "Masukan NIM        ="; cin >> mahasiswa.nim;
    cin.ignore();
    cout << "Nama Karyawan      ="; getline (cin,mahasiswa.nama);
    cout << "Masukan Nilai      ="; cin >> mahasiswa.nilai;
    cout << "\n\nCetak Data\n";
    cout << "=================================\n";
    cout << "Masukan NIM        = " << mahasiswa.nim << endl;
    cout << "Masukan Nama       = " << mahasiswa.nama << endl;
    cout << "Masukan Nilai      = " << mahasiswa.nilai << endl;
    cout << "=================================\n";
    return 0;
}
