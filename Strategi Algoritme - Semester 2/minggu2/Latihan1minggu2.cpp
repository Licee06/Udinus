#include <iomanip>
#include <iostream>
using namespace std;

int main()
{
    int datax[10] = {5, 8, 80, 3, 6, 8, 1, 10, 15, 75};
    int caridata, i, flag = 0;

    cout << "PENCARIAN DENGAN SEQUENTIAL SEARCH" << endl;
    cout << "----------------------------------" << endl;
    cout << "Data   :";
    for(int n=0; n<10; n++)
        cout << setw(5) << datax[n];
    cout << endl;

    cout << "\nMasukkan data yang dicari : ";
    cin >> caridata;

    for(i = 0; i<10; i++)
    {
        if(datax[i]==caridata)
        {
            flag = 1;
            break;
        }
    }

    if(flag==1)
    {
        cout << "\nData dengan nilai " << datax[i];
        cout << " ditemukan pada indek ke-" << i << endl;
    }
    else
        cout << "\nData " << caridata << " tidak ditemukan ! \n";

    return 0;
}
