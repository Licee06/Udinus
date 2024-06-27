//NIM: A12.2023.07058
//NAMA: FICO ALDI SAPUTRO

#include <iostream>
#include <conio.h>

using namespace std;

int addition (int a, int b)
{
    int r;
    r = a + b;
    return (r);
}

int main()
{
    int z;
    z = addition (5, 3);
    cout << "The result is " << z;
    getch();
}
