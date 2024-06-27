#include <iostream>
#include <conio.h>
using namespace std;

//Menghitung Faktorial dengan menggunkan rekursi
int factorial (int a)
{
    if (a == 0)
    {
        return 0;
    }
    else
    {
        if(a > 1)
        {
            return (a * factorial (a-1));
        }
        else
        {
            return 1;
        }
    }
}

int main ()
{
    int n;
    int hasil;

    cout << " Menghitung N Faktorial (N!) \n";
    cout << "Masukkan N : "; cin >> n;
    cout << "==============================\n";

    hasil = factorial(n);

    cout << " " << n <<"! = " << hasil << endl;
    getch();

    return 0;
}

