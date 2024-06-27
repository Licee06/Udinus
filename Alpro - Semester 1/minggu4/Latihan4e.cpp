//NIM: A12.2023.07058
//NAMA: FICO ALDI SAPUTRO

#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <windows.h>

using namespace std;

COORD coord= {0,0};
void gotoxy(int x,int y)
{
    coord.X=x;
    coord.Y=y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);
}

int main()
{
    char nama [20];
    int nilai;
    char ket[10];
    int brs=4 , klm=18, klmi=36;
    gotoxy(klm, brs++);cout<< "nilai mahasiswa";
    gotoxy(klm, brs++);cout<< "======================";
    gotoxy(klm, brs++);cout<< "1. nama         : ";
    gotoxy(klm, brs++);cout<< "2. nilai        : ";
    gotoxy(klm, brs++);cout<< "3. nilai huruf  : ";
    gotoxy(klm, brs++);cout<< "4. keterangan   : ";

    brs = 6;
    gotoxy(klmi, brs++) ; gets(nama);
    gotoxy(klmi, brs++) ; cin >> nilai;

    if (nilai >= 85)
        strcpy(ket, "A");
    else if (nilai >= 70)
        strcpy(ket, "B");
    else if (nilai >= 60)
        strcpy(ket, "C");
    else if (nilai >= 50)
        strcpy(ket, "D");
    else
        strcpy(ket, "E");
        gotoxy(klmi, brs++) ;
        cout << ket;

    if (nilai >= 60)
        strcpy(ket, "Lulus");
    else
        strcpy(ket, "Gagal");
    gotoxy(klmi, brs++) ;
    cout << ket;

    return 0;
}
