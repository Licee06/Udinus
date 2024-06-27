#include <iostream>
#include <windows.h>
#include <stdio.h>
#include <conio.h>
using namespace std;

struct Node
{
    int notest;
    char nama[20];
    int nilai1;
    int nilai2;
    Node *next;
};

Node *start_ptr = NULL;
Node *end_ptr = NULL;
int total_data = 0;
int total_nilai1 = 0;
int total_nilai2 = 0;

COORD coord = {0, 0}; // this is global variable
void gotoxy(int x, int y)
{
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

void tambahdepan()
{
    Node *temp;
    // masukkan data...........................
    temp = new Node;
    system("cls");
    cout << "Isikan Data Simpul Baru\n";
    cout << "====================================\n";
    cout << "No Test  : ";
    cin >> temp->notest;
    cout << "Nama     : ";
    cin >> temp->nama;
    cout << "Nilai 1  : ";
    cin >> temp->nilai1;
    cout << "Nilai 2  : ";
    cin >> temp->nilai2;
    temp->next = NULL;
    cout << endl;

    // Menambahkan nilai baru ke total
    total_data++;
    total_nilai1 += temp->nilai1;
    total_nilai2 += temp->nilai2;

    // Set up link to this node........................
    if (start_ptr == NULL)
    {
        start_ptr = temp;
        end_ptr = temp;
    }
    else
    {
        temp->next = start_ptr;
        start_ptr = temp;
    }
}

void tambahbelakang()
{
    Node *temp;
    // masukkan data...........................
    temp = new Node;
    system("cls");
    cout << "Isikan Data Simpul Baru\n";
    cout << "====================================\n";
    cout << "No Test  : ";
    cin >> temp->notest;
    cout << "Nama     : ";
    cin >> temp->nama;
    cout << "Nilai    : ";
    cin >> temp->nilai;
    temp->next = NULL;
    cout << endl;

    // Menambahkan nilai baru ke total
    total_data++;
    total_nilai += temp->nilai;

    // Set up link to this node........................
    if (start_ptr == NULL)
    {
        start_ptr = temp;
        end_ptr = temp;
    }
    else
    {
        end_ptr->next = temp;
        end_ptr = temp;
    }
}

void hapusdepan()
{
    Node *temp;
    temp = start_ptr;
    // cek apakah kosong, 1 node, atau bbrp node.......
    if (start_ptr == NULL)
    {
        cout << "Linked List Kosong ! [Enter] ";
        getch();
    }
    else
    {
        //jika ada sebuah node.........................
        if (start_ptr->next == NULL)
        {
            start_ptr = NULL;
            end_ptr = NULL;
        }
        else
        {
            //jika node lebih dari 1...................
            start_ptr = start_ptr->next;
        }
        delete temp;
    }
}

void hapusbelakang()
{
    // Belum diimplementasikan, Anda dapat mengimplementasikannya sendiri
}

void print_node()
{
    Node *temp;
    temp = start_ptr;

    if (temp == NULL)
        cout << "Empty List !, [Enter]";
    else
    {
        system("cls");
        int klm = 5;
        int brs = 5;
        int no = 1;
        gotoxy(klm + 5, (brs - 4));
        cout << "Isi Linked List";
        gotoxy(klm + 4, (brs - 3));
        cout << "=========================";
        cout << "===================================";
        gotoxy(klm + 5, (brs - 2));
        cout << "No   No Test   Nama";
        cout << "       Nilai";
        gotoxy(klm + 4, (brs - 1));
        cout << "=========================";
        cout << "===================================";
        while (temp != NULL)
        {
            gotoxy(klm + 5, brs);
            cout << no;
            gotoxy(klm + 10, brs);
            cout << temp->notest;
            gotoxy(klm + 20, brs);
            cout << temp->nama;
            gotoxy(klm + 30, brs);
            cout << temp->nilai;

            temp = temp->next;
            no++;
            brs++;
        }
        // Cetak rata-rata nilai
        if (total_data > 0)
        {
            gotoxy(klm + 5, brs);
            cout << "Rata-rata Nilai: " << (float)total_nilai / total_data;
        }
        gotoxy(klm + 4, brs++);
        cout << "=========================";
        cout << "===================================";
        gotoxy(klm + 5, brs);
        cout << "Enter !";

        getch();
    }
}

//program utama ...........................................
int main()
{
    int pilih;
    do
    {
        //Tampilan menu....................................
        system("cls");
        cout << "----------------------------------\n"
             << " Menu Pilihan (SLLNC)\n"
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
        default:
            cout << "Pilihan tidak tersedia ! ";
            break;
        }
    } while (pilih != 6);
    return 0;
}
