//NAMA: FICO ALDI SAPUTRO
//NIM: A12.2023.07058

#include <iostream>
#include <conio.h>

using namespace std;
int nis[5];
int nilai[5];
int no=0;
int main()
{
    for (int i=0; i<5; i++)
    {
        system ("cls");
        cout << "Data Nilai siswa, index ke-" << i << endl;
        cout << "================================\n";
        cout << "Nomor Induk Siswa ="; cin >> nis [i];
        cout << "Nilai             ="; cin >> nilai[i];
        cout << nilai[i]<< endl;
    }
    system("cls");
    cout << "Data Nilai Siswa \n";
    cout << "==================================\n";
    cout << "No\tNIS\t\tNilai\n";
    cout << "==================================\n";
    for (int i=0; i<5; i++)
    {
        no=no+1;
        cout << no << "\t" << nis[i] << "\t\t";
        cout << nilai[i] << endl;
    }
    cout << "==================================\n";
}
