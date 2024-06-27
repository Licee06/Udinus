#include <iomanip>
#include <conio.h>
#include <windows.h>
#include <iostream>
using namespace std;

int const n = 10;
int jml;

struct smhs
{
    char nama[10];
    int nilai;
};

smhs datamhs[n];

void tukar(int a, int b)
{
    smhs temp;
    temp = datamhs[b];
    datamhs[b] = datamhs[a];
    datamhs[a] = temp;
}

void bubbleSort()
{
    for(int i = 1; i < jml;i++)
    {
        for(int j = 0; j < jml-i; j++)
        {
            if(datamhs[j].nilai > datamhs[j+1].nilai)
                tukar(j,j+1);
        }
    }
}

int main()
{
    cout << "===PROGRAM BUBBLE SORT===" << endl;
    jml = 0;
    while (jml<n)
    {
        cout << "\n\nmasukkan data indek [" << jml << "] :\n";
        cout << "Nama   : "; cin >> datamhs[jml].nama;
        cout << "Nilai  : "; cin >> datamhs[jml].nilai;
        jml++;
        cout << "\nTambah data lagi [y/t] : ";
        char lagi = getche();
        if(strchr("Tt", lagi) != NULL) break;
    }

    system("cls");
    cout << "\n\nData Awal : " << endl;
    for(int i=0; i<jml; i++)
    {
        cout << setw(5) << (i+1);
        cout << setw(15) << datamhs[i].nama;
        cout << setw(5) << datamhs[i].nilai;
        cout << endl;
    }

    bubbleSort();

    cout << "\n\nData Setelah di Sort : " << endl;
    for(int a=0; a<jml; a++)
    {
        cout << setw(5) << (a+1);
        cout << setw(15) << datamhs[a].nama;
        cout << setw(5) << datamhs[a].nilai;
        cout << endl;
    }

    cout << "\n\nSorting Selesai";
    return 0;
}
