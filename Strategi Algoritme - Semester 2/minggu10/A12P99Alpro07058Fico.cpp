#include <iostream>
#include <windows.h>
#include <stdio.h>
#include <conio.h>
using namespace std;

struct Node
{
    int notest;
    char nama[20];
    int nilai;
    Node *next;
};

Node *start_ptr = NULL;
Node *end_ptr = NULL;

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
    cin.ignore(); // To clear the newline character left by cin
    cout << "Nama     : ";
    cin.getline(temp->nama, 20);
    cout << "Nilai    : ";
    cin >> temp->nilai;
    temp->next = NULL;
    cout << endl;

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
    cin.ignore(); // To clear the newline character left by cin
    cout << "Nama     : ";
    cin.getline(temp->nama, 20);
    cout << "Nilai    : ";
    cin >> temp->nilai;
    temp->next = NULL;
    cout << endl;

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
    Node *temp1, *temp2;
    temp2 = end_ptr;
    // cek apakah kosong, 1 node, atau bbrp node.......
    if (start_ptr == NULL)
    {
        cout << "\n\nLinked List Kosong ! [Enter] ";
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
            temp1 = start_ptr;
            while (temp1->next != end_ptr)
            {
                temp1 = temp1->next;
            }
            end_ptr = temp1;
            end_ptr->next = NULL;
        }
        delete temp2;
    }
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
        int totalNilai = 0;
        int jumlahNode = 0;

        gotoxy(klm + 5, (brs - 4));
        cout << "Isi Linked List";
        gotoxy(klm + 4, (brs - 3));
        cout << "=========================";
        cout << "===================================";
        gotoxy(klm + 5, (brs - 2));
        cout << "No   No Test   Nama";
        cout << "                        Nilai";
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
            gotoxy(klm + 50, brs);
            cout << temp->nilai;

            totalNilai += temp->nilai;
            jumlahNode++;
            temp = temp->next;
            no++;
            brs++;
        }

        if (jumlahNode > 0)
        {
            double rataRata = static_cast<double>(totalNilai) / jumlahNode;
            gotoxy(klm + 5, brs++);
            cout << "Rata-rata Nilai: " << rataRata;
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
