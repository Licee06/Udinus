#include <windows.h>
#include <iostream>
#include <string>
using namespace std;

#define MAX 10

struct pajak
{
    char nopol[11];
    char nama[20];
    int tahun;
    int pajak;
    int denda;
    // Tambahkan anggota bayar
    int bayar;
};

pajak antrian[MAX];
int front = -1;
int rear = -1;

void gotoxy(int x, int y)
{
    HANDLE hConsoleOutput;
    COORD dwCursorPosition;
    cout.flush();
    dwCursorPosition.X = x;
    dwCursorPosition.Y = y;
    hConsoleOutput = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleCursorPosition(hConsoleOutput, dwCursorPosition);
}

bool isFull()
{
    return rear == MAX - 1;
}

bool isEmpty()
{
    return rear == -1;
}

void enqueue()
{
    if (isFull())
    {
        cout << "\nAntrian penuh! ";
        system("pause");
    }
    else
    {
        char xnopol[11];
        string xnama;
        int xpajak;
        int xtahun;
        int xdenda;
        cout << "\nMasukkan:\n";
        cout << "==================================\n";
        cout << "1. Nopol       : "; cin >> xnopol;
        cin.ignore();
        cout << "2. Nama        : "; getline(cin, xnama);
        cout << "3. Tahun       : "; cin >> xtahun;
        cout << "4. Pajak       : "; cin >> xpajak;
        cout << "5. Denda       : "; cin >> xdenda;

        rear++;
        strcpy(antrian[rear].nopol, xnopol);
        strcpy(antrian[rear].nama, xnama.c_str());
        antrian[rear].tahun = xtahun;
        antrian[rear].pajak = xpajak;
        antrian[rear].denda = xdenda;
    }
}

void dequeue()
{
    if (isEmpty())
    {
        cout << "\nAntrian masih kosong!";
    }
    else
    {
        cout << "\nMengambil antrian: " << antrian[0].nama << "\n";
        cout << endl;

        for (int i = 0; i < rear; i++)
            antrian[i] = antrian[i + 1];

        strcpy(antrian[rear].nopol, "");
        strcpy(antrian[rear].nama, "");
        antrian[rear].tahun = 0;
        antrian[rear].pajak = 0;
        antrian[rear].denda = 0;
        rear--;
    }
    system("pause");
}

void detailprintQueue()
{
    int brs = 5;
    int klm = 1;
    system("cls");
    cout << "\nAntrian Bayar Pajak\n";
    cout << "========================================================================\n";
    cout << " No    Nopol     Nama       Tahun      Pajak      Denda       Bayar    \n";
    cout << "========================================================================\n";

    for (int i = 0; i <= MAX-1; i++) // Periksa batas atas
    {
         if (i <= rear)
         {
            int bayar = antrian[i].pajak + antrian[i].denda;

            gotoxy(klm + 1, brs); cout << (i + 1);
            gotoxy(klm + 5, brs); cout << antrian[i].nopol;
            gotoxy(klm + 15, brs); cout << antrian[i].nama;
            gotoxy(klm + 33, brs); cout << antrian[i].tahun;
            gotoxy(klm + 45, brs); cout << antrian[i].pajak;
            gotoxy(klm + 55, brs); cout << antrian[i].denda;
            gotoxy(klm + 65, brs); cout << bayar;
            brs++;
         }
         else
         {
            gotoxy(klm + 1, brs); cout << (i + 1);
            gotoxy(klm + 5, brs); cout << "";
            gotoxy(klm + 15, brs); cout << "";
            gotoxy(klm + 33, brs); cout << "";
            gotoxy(klm + 45, brs); cout << "";
            gotoxy(klm + 55, brs); cout << "";
            gotoxy(klm + 65, brs); cout << "";
         }
         brs++;
    }
    cout << "\n=======================================================================\n";
    cout << "dibuat oleh : A12.2023.07058 & Fico Aldi Saputro";
    system("pause");
}

void printQueue()
{
    if (isEmpty())
    {
        cout << "\nAntrian kosong!";
    }
    else
    {
        detailprintQueue();
    }
}

int main()
{
    int pilih;
    do
    {
        system("cls");
        cout << " Program Dibuat : A12.2023.07058 & Fico Aldi Saputro\n"
             << " ---------------------------------------------\n"
             << " Menu Pilihan\n"
             << " --------------------------------------------\n"
             << " [1] Enqueue / Tambah Antrian \n"
             << " [2] Dequeue / Hapus antrian \n"
             << " [3] PrintDequeue / Cetak Antrian \n"
             << " [4] Keluar \n\n"
             << " ---------------------------------\n"
             << " Masukkan Pilihan\n"; cin >> pilih;
        switch (pilih)
        {
            case 1:
                enqueue();
                break;
            case 2:
                dequeue();
                break;
            case 3:
                printQueue();
                break;
            default:
                cout << "Pilihan tidak tersedia! ";
                break;
        }
    } while (pilih != 4);
    return 0;
}
