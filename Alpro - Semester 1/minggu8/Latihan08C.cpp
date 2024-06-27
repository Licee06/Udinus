//NAMA:FICO ALDI SAPUTRO
//NIM:A12.2023.07058

#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <string.h>

using namespace std;

int main()
{
    struct smhs
    {
    char nim [5];
        char nama[15];
        float nilai;
    };
    smhs datamhs[5];
    int a = 0;
    char nhuruf[1];
    char ket[10];

    do {
        cout << "Data Mahasiswa index- " << a << "\n";
        cout << "=====================================\n";
        cout << "Masukan NIM        = "; cin >> datamhs[a].nim;
        cin.ignore();
        cout << "Masukan Nama       = "; gets(datamhs[a].nama);
        cout << "Masukan Nilai      = "; cin >> datamhs[a].nilai;

        if (datamhs[a].nilai >= 85)
            strcpy(nhuruf, "A");
        else if (datamhs[a].nilai >= 70)
            strcpy(nhuruf, "B");
        else if (datamhs[a].nilai >= 60)
            strcpy(nhuruf, "C");
        else if (datamhs[a].nilai >= 50)
            strcpy(nhuruf, "D");
        else
            strcpy(nhuruf, "E");

        if (datamhs[a].nilai >= 60)
            strcpy(ket, "Lulus");
        else
            strcpy(ket, "Gagal");

        cout << "NIM Hurut          = " << nhuruf << endl;
        cout << "keterangan         = " << ket << endl;
        cout << "==============================================\n\n";
        getch();
        a++;
    } while (a < 5);
}
