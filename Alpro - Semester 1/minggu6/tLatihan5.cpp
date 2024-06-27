//NAMA: FICO ALDI SAPUTRO
//NIM: A12.2023.07058

#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <iomanip>
#include <string.h>
#include <windows.h>

using namespace std;

COORD coord= {0,0};
int gotoxy(int x,int y)
{
    coord.X=x;
    coord.Y=y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);}

    int nip [10];
    char nama[20][30];
    int gaji [10];
    int lembur [10];
    char lagi [1];
    int a=0;

    int main()
    {
        do{
            system("cls");
            cout << "Input Data Pegawai\n";
            cout << "===================================\n";
            cout << "1. NIP             :"; cin >> nip[a];
            cout << "2. Nama            :"; cin >> nama[a];
            cout << "3. Gaji            :"; cin >> gaji[a];
            cout << "4. Lembur (Jam)    :"; cin >> lembur[a];
            cout << "Input Data Lagi [y/t]:";
            cin >> lagi;
            a++;
        } while (strcmp("y", lagi)==0);


        int no, len=a, brs=3, klm=0;
        system ("cls");
        cout << " No  NIP       Nama    ";
        cout << "        Gaji      lembur\n";
        cout << "--------------------------------------------\n";
        for (int pss=0;pss<len; pss++)
        {
            no=no+1;
            gotoxy((klm+1),brs); cout << no;
            gotoxy((klm+5),brs); cout << nip[pss];
            gotoxy((klm+15),brs); cout << nama[pss];
            gotoxy((klm+30),brs); cout << gaji[pss];
            gotoxy((klm+40),brs); cout << lembur[pss];
            brs++;
        }
        cout << "\n--------------------------------------------\n";
        return 0;
}
