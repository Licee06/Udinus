//NAMA: FICO ALDI SAPUTRO
//NIM: A12.2023.07058

#include <iostream>
#include <conio.h>

using namespace std;
int nilai[5];
int main()
{
    nilai[0]=10;
    nilai[1]=80;
    nilai[2]=70;
    nilai[3]=90;
    nilai[4]=40;
    for (int i=0; i<5; i++)
    {
        cout << "Nilai x["<<i<<"] = ";
        cout << nilai[i]<< endl;
    }
    return 0;
}
