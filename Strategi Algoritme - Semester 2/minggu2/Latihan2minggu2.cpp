#include <iomanip>
#include <iostream>
using namespace std;

int main()
{
    int datax[10] = {5, 8, 80, 3, 6, 8, 1, 10, 15, 75};
    int caridata;
    bool found = false;

    cout << "PENCARIAN DENGAN SEQUENTIAL SEARCH" << endl;
    cout << "----------------------------------" << endl;
    cout << "Data   :";
    for(int n=0; n<10; n++)
        cout << setw(5) << datax[n];
    cout << endl;

    cout << "\nMasukkan data yang dicari : ";
    cin >> caridata;

    for (int i = 0; i < 10; i++)
    {
        if (caridata == datax[i]){
            found = true;
            cout << "Data ditemukan pada datax[" << i << "]\n";
        }
    }

    if (!found) {
        cout << "Data yg dicari tidak ditemukan !\n";
    }

    return 0;
}
