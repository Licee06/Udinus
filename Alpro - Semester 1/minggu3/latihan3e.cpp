//NAMA: FICO ALDI SAPUTRO
//NIM: A12.2023.07058

#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    int a, b;
    cout << "Nilai a                             : "; cin >> a;
    cout << "Nilai b                             : "; cin >> b;
    cout << "Hasil 1 (a>10 && b<20)              : "<< (a>10 && b<20) << endl;
    cout << "Hasil 2 (a==b && b>20)              : "<< (a==b && b>20) << endl;
    cout << "Hasil 3 (a>=b && b>20)              : "<< (a>=b && b>20) << endl;
    cout << "Hasil 4 (a>10 || b<20)              : "<< (a>10 || b<20) << endl;
    cout << "Hasil 5 (a==b || b>20)              : "<< (a==b || b>20) << endl;
    cout << "Hasil 6 (a>=b || b>20)              : "<< (a>=b || b>20) << endl;
    cout << "Hasil 7 (a!=b || b>20)              : "<< (a!=b || b>20) << endl;
    return 0;
}
