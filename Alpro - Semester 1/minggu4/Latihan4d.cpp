//NIM: A12.2023.07058
//NAMA: FICO ALDI SAPUTRO

#include <iostream>
#include <conio.h>
#include <windows.h>

using namespace std;

COORD coord= {0,0};
int gotoxy (int x, int y)
{
    coord.X=x;
    coord.Y=y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);
}
int main ()
{
    char nama [20];
    char bagian [20];
    int anak;
    int tunjangan;
    int brs=4 , klm=18, klmi=33;
    gotoxy(klm, brs++) ; cout << "hitung tunjangan anak";
    gotoxy(klm, brs++) ; cout << "================================";
    gotoxy(klm, brs++) ; cout << "1. nama      : ";
    gotoxy(klm, brs++) ; cout << "2. bagian    : ";
    gotoxy(klm, brs++) ; cout << "3. jml anak  : ";
    gotoxy(klm, brs++) ; cout << "  tunjangan  : ";
    brs = 6;
    gotoxy(klmi, brs++) ; cin >> nama;
    gotoxy(klmi, brs++) ; cin >> bagian;
    gotoxy(klmi, brs++) ; cin >> anak;
    if (anak>3)
        tunjangan = 3 * 100000;
    else
        tunjangan = anak * 100000;
    gotoxy(klmi, brs++) ; cout << tunjangan << endl;
    return 0;
}
