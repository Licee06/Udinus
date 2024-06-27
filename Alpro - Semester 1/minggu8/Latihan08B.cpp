//NAMA:FICO ALDI SAPUTRO
//NIM:A12.2023.07058

#include <iostream>
#include <conio.h>
#include <stdio.h>

using namespace std;

int main()
{
    struct sMhs
    {
    char nim[5];
        float nilai1;
        float nilai2;
    };
    sMhs datamhs[5];

    int a = 0; float rata;
    do {
        cout << "Data pada index ke -" << a << endl;
        cout << "==================================\n";
        cout << "NIM        = "; cin >> datamhs[a].nim;
        cout << "Nilai1     = "; cin >> datamhs[a].nilai1;
        cout << "Nilai2     = "; cin >> datamhs[a].nilai2;

        rata = (datamhs[a].nilai1 + datamhs[a].nilai2) / 2;
        cout << "Rata-rata = " << rata << endl;
        a++;
    } while ( a < 3);

    getch();
}
