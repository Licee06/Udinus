//NIM   : A12.2023.07058
//Nama  : Fico Aldi Saputro

#include <iostream>
#include <conio.h>

using namespace std;
// deklarasi variabel
float Luas_segitiga_siku = 0;
int alas, tinggi;

int main ()
{
    cout << "Input Alas = ";
    cin >> alas;

    Luas_segitiga_siku = alas * tinggi /2;

    cout << "Output = " << Luas_segitiga_siku << endl;
    getch();
}
