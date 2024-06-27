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
    int nip;
    char nama[20];
    char bagian[10];
    int anak, tanak;
    int gaji, total;
    char lagi[1];

    do
    {
        system ("cls");
        klm = 22;
        klmi = klm + 25;
        brs = 8;
        gotoxy(klm, brs++); cout << "Hitung Gaji Pegawai";
        gotoxy(klm, brs++); cout << "===========================";
        gotoxy(klm, brs++); cout << "1. NIP                 :";
        gotoxy(klm, brs++); cout << "2. Nama                :";
        gotoxy(klm, brs++); cout << "3. Bagian              :";
        gotoxy(klm, brs++); cout << "4. Jml. anak           :";
        gotoxy(klm, brs++); cout << "5. Gaji                :";
        gotoxy(klm, brs++); cout << "6. Tunj . Anak         :";
        gotoxy(klm, brs++); cout << "===========================";
        gotoxy(klm, brs++); cout << "Total                  :";

        brs -= 8;
        gotoxy(klmi, brs++); cin >> nip;
        gotoxy(klmi, brs++); cin >> nama;
        gotoxy(klmi, brs++); cin >> bagian;
        gotoxy(klmi, brs++); cin >> anak;
        gotoxy(klmi, brs++); cin >> gaji;

        if (anak > 3)
            tanak = 3 * 100000;
        else
            tanak = anak * 100000;

        total = gaji + tanak;

        gotoxy(klmi, brs++); cout << tanak;
        brs++;
        gotoxy(klmi, brs++); cout << total;

        brs++;
        gotoxy(klm, brs++); cout << " Lagi [y/t] : ";
        cin >> lagi;

    } while (strcmp(lagi, "y") == 0);
}
