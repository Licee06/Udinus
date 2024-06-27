#include <iostream>
#include <windows.h>
#include <conio.h>
#include <iomanip>
#include <sstream>

using namespace std;

struct Node
{
    char nama[20];
    long gaji;
    long tunjangan;
    Node *next;
};

Node *head = NULL;

string format_number(long number)
{
    stringstream ss;
    ss.imbue(locale("en_US.UTF-8"));
    ss << fixed << number;
    return ss.str();
}

int tambah()
{
    Node *temp;
    // Masukkan data
    temp = new Node;
    system("cls");
    cout << "Isikan Data Simpul Baru\n";
    cout << "=================================\n";
    cout << "Nama       : "; cin >> temp->nama;
    cout << "Gaji       : "; cin >> temp->gaji;
    cout << "Tunjangan  : "; cin >> temp->tunjangan;
    temp->next = NULL;
    cout << endl;

    // Set up link this node
    if (head == NULL)
    {
        head = temp;
    }
    else
    {
        temp->next = head;
        head = temp;
    }
    return 0;
}

void print_node()
{
    Node *temp;
    temp = head;
    int no = 0;

    if(temp == NULL)
        cout << "Empty List! [Enter]";
    else
    {
        system("cls");
        cout << "\nIsi Linked List\n";
        cout << "==========================================\n";
        cout << "No     Nama               Gaji           Tunjangan\n";
        cout << "==========================================\n";
        while(temp != NULL)
        {
            cout << left << setw(6) << ++no;
            cout << left << setw(18) << temp->nama;
            cout << right << setw(15) << format_number(temp->gaji);
            cout << right << setw(15) << format_number(temp->tunjangan);
            cout << endl;
            temp = temp->next;
        }
    }
    cout << "==========================================\n";
    cout << "Enter !";
    getch();
}

// Program utama
int main()
{
    int pilih;
    do
    {
        // Tampilan menu
        system("cls");
        cout << "----------------------------\n"
             << " Menu Pilihan (SLLNC) \n"
             << "-----------------------------\n"
             << " [1] Tambah \n"
             << " [5] Cetak Linked List \n"
             << " [6] Keluar \n\n"
             << "-----------------------------\n"
             << "Masukkan pilihan : "; cin >> pilih;
        switch (pilih)
        {
        case 1:
            tambah();
            break;
        case 5:
            print_node();
            break;
        default:
            if (pilih != 6)
                cout << "Pilihan tidak tersedia ! ";
            break;
        }
    } while (pilih != 6);

    return 0;
}
