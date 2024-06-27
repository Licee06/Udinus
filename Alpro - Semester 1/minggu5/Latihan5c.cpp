//NAMA: FICO ALDI SAPUTRO
//NIM: A12.2023.07058

#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <windows.h>

using namespace std;

COORD coord= {0,0};

void gotoxy(int x, int y)
{
    coord.X=x;
    coord.Y=y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);
}
int main()
{
    int klm ,klmi, brs;
    int nilai1, nilai2;
    float rata2;
    char ket[5];
    char lagi[1];

    do
    {
        system("cls");
        klm = 23;
        klmi = klm + 17;
        brs = 9;
        gotoxy(klm, brs++); cout << "Berhitung (Tambah)";
        gotoxy(klm, brs++); cout << "=========================";
        gotoxy(klm, brs++); cout << "Nilai 1         :    ";
        gotoxy(klm, brs++); cout << "Nilai 2         :    ";
        gotoxy(klm, brs++); cout << "=========================";
        gotoxy(klm, brs++); cout << "Rata-rata       :    ";
        gotoxy(klm, brs++); cout << "Keterangan      :    ";
        brs -= 5;
        gotoxy(klmi, brs++); cin >> nilai1;
        gotoxy(klmi, brs++); cin >> nilai1;

        rata2 = (nilai1 + nilai2) / 2;

        if (rata2 >= 60)
            strcpy(ket, "Lulus");
        else
            strcpy(ket, "Gagal");

        brs++;
        gotoxy(klmi, brs++); cout << rata2;
        gotoxy(klmi, brs++); cout << ket;

        brs++;
        gotoxy(klmi, brs++); cout << "Lagi [y/t] : ";
        cin >> lagi;
    } while (strcmp(lagi, "y") == 0);
    return 0;
}
