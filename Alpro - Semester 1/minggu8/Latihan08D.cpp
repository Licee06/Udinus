//NAMA:FICO ALDI SAPUTRO
//NIM:A12.2023.07058

#include <conio.h>
#include <stdio.h>
#include <string.h>
#include <iostream>
#include <windows.h>

using namespace std;
COORD coord = {0, 0};

void gotoxy(int x, int y) {
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

struct spgw
{
    int nip;
    char nama[25];
    int gaji;
    int lembur;
};
spgw datapgw[10];

char lagi[1];
int a = 0;

int main ()
{
    do {
        system("cls");
        cout << "Input data pegawai\n";
        cout << "====================================\n";
        cout << "1. NIP            : "; cin >> datapgw[a].nip;
        cin.ignore();
        cout << "2. Nama           : "; gets(datapgw[a].nama);
        cout << "3. Gaji           : "; cin >> datapgw[a].gaji;
        cout << "4. Lembur(jam)    : "; cin >> datapgw[a].lembur;
        cout << "\nlagi [y/t] ";
        cin >> lagi;
        a++;
    } while (strcmp("y", lagi) == 0);

    int no, len = a, brs = 5, klm = 0;
    system("cls");
    cout << "Laporan Gaji Pegawai\n";
    cout << "----------------------------------------------------------------dst. \n";
    cout << "NO     NIP     Nama    ";
    cout << "           Gaji        Lembur      Total\n";
    cout << "----------------------------------------------------------------dst. \n";
    for (int pss = 0; pss < len; pss++)
    {
        no = pss + 1;
        gotoxy((klm + 1), brs); cout << no;
        gotoxy((klm + 5), brs); cout << datapgw[pss].nip;
        gotoxy((klm + 15), brs); cout << datapgw[pss].nama;
        gotoxy((klm + 35), brs); cout << datapgw[pss].gaji;
        gotoxy((klm + 46), brs); cout << datapgw[pss].lembur;
        int total = datapgw[pss].gaji + datapgw[pss].lembur;
        gotoxy((klm + 57), brs); cout << total;

        brs++;
    }
cout << endl;
cout << "------------------------------------------------------------------dst. \n";
cout << "data sudah tercetak semua\n";
getch();
}
