#include <iostream>
#include <conio.h>
using namespace std;

//Menghitung Faktorial dengan menggunkan iterasi
int factorial (int a)
{
    int i,
    hasilx=1;

    for (i=1; i<=a; i++)
        hasilx = hasilx*i;

    return (hasilx);
}

int main ()
{
    int n;
    int hasil;

    cout << " Menghitung N Faktorian (N!) \n";
    cout << " Masukkan N : "; cin >> n;
    cout << "===============================\n";

    hasil = factorial(n);

    cout << " " << n <<"! = " << hasil << endl;
    getch();

    return 0;
}
