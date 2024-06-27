//NAMA: FICO ALDI SAPUTRO
//NIM: A12.2023.07058

#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    int i = 1;
    int nilai, total = 0;
    cout << "Masukkan 5 Buah Nilai\n";
    cout << "=====================\n";
    do
    {
        cout << "Nilai ke-" << i << " = ";
        cin >> nilai;
        total = total + nilai;
        i++;
    } while (i <= 5);
    cout << "====================================== +" << endl;
    cout << "Total     = " << total << endl;
    cout << "" << endl;
    return 0;
}
