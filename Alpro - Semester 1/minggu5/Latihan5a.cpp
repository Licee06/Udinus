//NAMA: FICO ALDI SAPUTRO
//NIM: A12.2023.07058

#include <iostream>
#include <conio.h>

using namespace std;
int main()
{
    int i = 1;
    int total = 0;

    while (i <= 10)
    {
        cout << i << endl;
        total = total + i;
        i = i + 1;
    }
    cout << "================= +" << endl;
    cout << "Total : " << total << endl;
    return 0;
}
