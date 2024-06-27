#include <iostream>
#include <windows.h>
#include <stdio.h>
#include <conio.h>

using namespace std;

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

struct Node
{
    Node *prev;
    int notest[5]; // Array untuk menyimpan nilai test
    char nama[20];
    int nilai[5]; // Array untuk menyimpan nilai-nilai ujian
    Node *next;
};

Node *head = NULL;
Node *tail = NULL;

// Deklarasi variabel...........................
int klm = 0, klmi = 0, brs = 0;

void tambahdepan()
{
    Node *temp;
    // Masukkan data...........................
    temp = new Node;
    system("cls");
    klm = 10;
    brs = 3;
    gotoxy(klm, brs++);
    cout << "Isikan Data Simpul Baru\n";
    gotoxy(klm, brs++);
    cout << "====================================\n";
    gotoxy(klm, brs++);
    cout << "No Test  : ";
    gotoxy(klm, brs++);
    cout << "Nama     : ";
    gotoxy(klm, brs++);
    cout << "Nilai    : ";
    gotoxy(klm, brs++);
    cout << "====================================\n";

    // Isi.........................
    klmi = 30;
    brs = 5;
    gotoxy(klmi, brs++);
    for (int i = 0; i < 5; ++i)
    {
        cin >> temp->notest[i];
    }
    gotoxy(klmi, brs++);
    cin.ignore(); // Ignore newline left in the buffer
    cin.getline(temp->nama, 20);
    gotoxy(klmi, brs++);
    for (int i = 0; i < 5; ++i)
    {
        cin >> temp->nilai[i];
    }
    temp->prev = NULL;
    temp->next = NULL;

    // Set up link to this node........................
    if (head == NULL)
    {
        head = temp;
        tail = temp;
    }
    else
    {
        temp->next = head;
        head->prev = temp;
        head = temp;
    }
}

void tambahbelakang()
{
    Node *temp;
    // Masukkan data...........................
    temp = new Node;
    system("cls");
    klm = 10;
    brs = 3;
    gotoxy(klm, brs++);
    cout << "Isikan Data Simpul Baru\n";
    gotoxy(klm, brs++);
    cout << "====================================\n";
    gotoxy(klm, brs++);
    cout << "No Test  : ";
    gotoxy(klm, brs++);
    cout << "Nama     : ";
    gotoxy(klm, brs++);
    cout << "Nilai    : ";
    gotoxy(klm, brs++);
    cout << "====================================\n";

    // Isi.........................
    klmi = 30;
    brs = 5;
    gotoxy(klmi, brs++);
    for (int i = 0; i < 5; ++i)
    {
        cin >> temp->notest[i];
    }
    gotoxy(klmi, brs++);
    cin.ignore(); // Ignore newline left in the buffer
    cin.getline(temp->nama, 20);
    gotoxy(klmi, brs++);
    for (int i = 0; i < 5; ++i)
    {
        cin >> temp->nilai[i];
    }
    temp->prev = NULL;
    temp->next = NULL;

    // Set up link to this node........................
    if (head == NULL)
    {
        head = temp;
        tail = temp;
    }
    else
    {
        tail->next = temp;
        temp->prev = tail;
        tail = temp;
    }
}

void hapusdepan()
{
    Node *temp;
    temp = head;
    brs = 15;
    // cek apakah kosong, 1 node, atau bbrp node.......
    if (head == NULL)
    {

        gotoxy(klm, brs++);
        cout << "Linked List Kosong ! [Enter] ";
        getch();
    }
    else
    {
        //jika ada sebuah node.........................
        if (head->next == NULL)
        {
            head = NULL;
            tail = NULL;
        }
        else
        {
            //jika node lebih dari 1...................
            head = head->next;
            head->prev = NULL;
        }
        delete temp;
        gotoxy(klm, brs++);
        cout << "Data berhasil dihapus ! [Enter] ";
        getch();
    }
}

void hapusbelakang()
{
    Node *temp;
    temp = tail;
    // cek apakah kosong, 1 node, atau bbrp node.......
    brs = 15;
    if (head == NULL)
    {
        gotoxy(klm, brs++);
        cout << "Linked List Kosong ! [Enter] ";
        getch();
    }
    else
    {
        //jika ada sebuah node.........................
        if (head->next == NULL)
        {
            head = NULL;
            tail = NULL;
        }
        else
        {
            //jika node lebih dari 1...................
            tail = temp->prev;
            tail->next = NULL;
        }
        delete temp;
        gotoxy(klm, brs++);
        cout << "Data berhasil dihapus ! [Enter] ";
        getch();
    }
}

void print_node()
{
    Node *temp;
    temp = head;

    klm = 1;
    brs = 3;
    int no = 0;

    if (temp == NULL)
    {
        brs = 15;
        gotoxy(klm, brs++);
        cout << "\nEmpty List !, [Enter]";
    }
    else
    {
        system("cls");
        //123456789012345678901234567890123456789012345678901234567890
        // no  No.Test     Nama         Nilai1   Nilai2    Rata
        gotoxy(klm, brs++);
        cout << "\nIsi Linked List\n";
        gotoxy(klm, brs++);
        cout << "============================dst";
        gotoxy(klm, brs++);
        cout << " no  No.Test     Nama         Nilai1   Nilai2    Rata  ";
        gotoxy(klm, brs++);
        cout << "=====================================";
        cout << "============================dst";
        do
        {
            no++;
            gotoxy(klm + 1, brs);
            cout << no;
            gotoxy(klm + 5, brs);
            for (int i = 0; i < 5; ++i)
            {
                cout << temp->notest[i] << " ";
            }
            gotoxy(klm + 16, brs);
            cout << temp->nama;
            gotoxy(klm + 30, brs++);
            for (int i = 0; i < 5; ++i)
            {
                cout << temp->nilai[i] << " ";
            }
            temp = temp->next;
        } while (temp != NULL);
        gotoxy(klm, brs++);
        cout << "=====================================";
        cout << "============================dst";
        gotoxy(klm, brs++);
        cout << "[Enter]";
        gotoxy(klm, brs++);
        cout << "Lengkapi dan rapikan";
    }
    getch();
}

// Program utama ...........................................
int main()
{
    int pilih;
    do
    {
        // Tampilan menu....................................
        system("cls");
        klm = 0;
        brs = 3;
        gotoxy(klm, brs++);
        cout << "Dibuat : NIM & Nama\n"
             << "----------------------------------\n"
             << " Menu Pilihan (DLLNC)\n"
             << "----------------------------------\n"
             << " [1] Tambah Depan \n"
             << " [2] Tambah Belakang \n"
             << " [3] Hapus Depan \n"
             << " [4] Hapus Belakang \n"
             << " [5] Cetak Linked List \n"
             << " [6] Keluar \n\n"
             << "----------------------------------\n"
             << "Masukkan pilihan : ";
        cin >> pilih;
        switch (pilih)
        {
        case 1:
            tambahdepan();
            break;
        case 2:
            tambahbelakang();
            break;
        case 3:
            hapusdepan();
            break;
        case 4:
            hapusbelakang();
            break;
        case 5:
            print_node();
            break;
        case 6:
            break;
        default:
            brs = 15;
            gotoxy(klm, brs++);
            cout << "Pilihan tidak tersedia ! ";
            break;
        }
    } while (pilih != 6);

    return 0;
}
