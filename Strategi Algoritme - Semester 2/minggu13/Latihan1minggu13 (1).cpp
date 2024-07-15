#include <iostream>
#include <windows.h>
#include <conio.h>
#include <stdio.h>

using namespace std;

struct Node
{
    int notest;
    char nama[20];
    int nilai;
    Node *prev;
    Node *next;
};

Node *head = NULL;
Node *tail = NULL;
Node *current = NULL;

//pengaturan brs dan klm..................
int klm = 10, klmi = klm + 20, brs = 3;

void gotoxy(int x, int y)
{
    HANDLE hConsoleOutput;
    COORD dwCursorPosition;
    cout.flush();
    dwCursorPosition.X = x;
    dwCursorPosition.Y = y;
    hConsoleOutput = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleCursorPosition(hConsoleOutput,dwCursorPosition);
}

void tambahdepan()
{
    Node *temp;
    // masukkan data...........................
    temp = new Node;
    system("cls");
    klm = 10; klmi = klm + 12; brs = 3;
    gotoxy(klm+1, brs++); cout << "Isikan Data Simpul Baru\n";
    gotoxy(klm+1, brs++); cout << "====================================";
    gotoxy(klm+1, brs++); cout << "No Test  : ";
    gotoxy(klm+1, brs++); cout << "Nama     : ";
    gotoxy(klm+1, brs++); cout << "Nilai    : ";
    gotoxy(klm+1, brs++); cout << "====================================";
    brs = 5;
    gotoxy(klmi, brs++); cin >> temp->notest;
    gotoxy(klmi, brs++); cin >> temp->nama;
    gotoxy(klmi, brs++); cin >> temp->nilai;
    temp->prev = temp;
    temp->next = temp;
    cout << endl;
    // Set up link to this node........................
    if (head == NULL)
    {
        head = temp;
        tail = temp;
        current = head;
    }
    else
    {
        temp->next = head;
        head->prev = temp;
        temp->prev = tail;
        tail->next = temp;
        head = temp;
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
    cout << "No Test  : "; cin >> temp->notest;
    cout << "Nama     : "; cin >> temp->nama;
    cout << "Nilai    : "; cin >> temp->nilai;
    temp->prev = temp;
    temp->next = temp;
    cout << endl;

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
        head->prev = temp;
        temp->next = head;
        tail = temp;
    }
}

void hapusdepan()
{
    Node *temp;
    temp = head;
    // cek apakah kosong, 1 node, atau bbrp node.......
    if (head == NULL)
    {
        cout << "\nLinked List Kosong ! [Enter] ";
        getch();
    }
    else
    {
        //jika ada sebuah node.........................
        if(head == tail)
        {
            head = NULL;
            tail = NULL;
        }
        else
        {
            //jika node lebih dari 1...................
            head = head->next;
            head->prev = tail;
            tail->next = head;
        }
        delete temp;
        current = head;
    }
}

void hapusbelakang()
{
    Node *temp;
    temp = tail;
    // cek apakah kosong, 1 node, atau bbrp node.......
    if (head == NULL)
    {
        cout << "\nLinked List Kosong ! [Enter] ";
        getch();
    }
    else
    {
        //jika ada sebuah node.........................
        if(head == tail)
        {
            head = NULL;
            tail = NULL;
        }
        else
        {
            //jika node lebih dari 1...................
            tail = tail->prev;
            tail->next = head;
            head->prev = tail;
        }
        delete temp;
        current = head;
    }
}

void hapuscurrent()
{
    Node *temp;
    temp = NULL;
    // cek apakah kosong, 1 node, atau bbrp node.......
    if (head == NULL)
    {
        cout << "\nLinked List Kosong ! [Enter] ";
        getch();
    }
    else
    {
        //jika ada sebuah node.........................
        if(head == tail)
        {
            head = NULL;
            tail = NULL;
        }
        else
        {
            //jika didepan.............................
            if (current == head)
            {
                temp = current;
                head = head->next;
                head->prev = tail;
                tail->next = head;
            }
            //jika dibelakang..........................
            if (current == tail)
            {
                temp = current;
                tail = tail->prev;
                tail->next = head;
                head->prev = tail;
            }
            //jika ditengah.............................
            if ((current != head) && (current != tail))
            {
                temp = current;
                current->prev->next = current->next;
                current->next->prev = current->prev;
            }
        }
        delete temp;
        current = head;
    }
}

void print_node()
{
    Node *temp;
    temp = head;
    klm = 1; brs = 2;
    int no = 0;

    if(temp == NULL)
        cout << "\nEmpty List !, [Enter]";
    else
    {
        system("cls");
        gotoxy(klm, brs++); cout << "Isi Linked List";
        gotoxy(klm, brs++); cout << "===========================================dst";
        //123456789012345678901234567890123456789012345678901234567890
        // No.  No.Test    Nama      Nilai       Current
        gotoxy(klm, brs++); cout << " No.  No.Test    Nama      Nilai       Current";
        gotoxy(klm, brs++); cout << "===========================================dst";
        do
        {
            no++;
            gotoxy(klm+1, brs); cout << no;
            gotoxy(klm+6, brs); cout << temp->notest;
            gotoxy(klm+17, brs); cout << temp->nama;
            gotoxy(klm+29, brs); cout << temp->nilai;
            if (temp == current)
            {
                gotoxy(klm+38, brs); cout << " <-- Current Node";
            }
            temp = temp->next;
            brs++;
        } while(temp != head);
        gotoxy(klm, brs++); cout << "===========================================dst";
        gotoxy(klm, brs); cout << "[Enter]";
    }
    getch();
}

void move_current_on()
{
    if (head != NULL)
    {
        if (current == tail)
            cout << "You are at the end of the list." << endl;
        else
            current = current->next;
    }
}

void move_current_back()
{
    if (head != NULL)
    {
        if (current == head)
            cout << "You are at the start of the list" << endl;
        else
            current = current->prev;
    }
}

void cari_current()
{
    int cari;
    Node *temp;
    temp = head;
    klm = 1; brs = 2;

    // Input the value of `current` to search for
    system("cls");
    cout << "Cari Node berdasarkan No Test\n";
    cout << "=====================================\n";
    cout << "Masukkan no test yang dicari: ";
    cin >> cari;

    // Traverse the list to find the node with matching `current`
    do
    {
        system("cls");
        if (temp->notest == cari)
        {
            current = temp;
            gotoxy(klm+1, brs++); cout << "=======================================";
            gotoxy(klm+1, brs++); cout << "No Test  : " << temp->notest << "\n";
            gotoxy(klm+1, brs++); cout << "Nama     : " << temp->nama << "\n";
            gotoxy(klm+1, brs++); cout << "Nilai    : " << temp->nilai << "\n";
            gotoxy(klm+1, brs++); cout << "=======================================";
            getch();
            return;
        }
        temp = temp->next;
    } while (temp != head);

    // If not found, inform the user
    cout << "\nNode dengan no test " << cari << " tidak ditemukan.\n";
    getch();
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
            << " Menu Pilihan (DLLC)\n"
            << "----------------------------------\n"
            << " [1] Tambah Depan \n"
            << " [2] Tambah Belakang \n"
            << " [3] Hapus Depan \n"
            << " [4] Hapus Belakang \n"
            << " [5] Hapus Current \n"
            << " [6] Cetak Linked List \n"
            << " [7] move On \n"
            << " [8] move Back \n"
            << " [9] Cari Current \n"
            << " [10] Keluar \n\n"
            << "----------------------------------\n"
            << "Masukkan pilihan : "; cin >> pilih;
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
                hapuscurrent();
                break;
            case 6:
                print_node();
                break;
            case 7:
                move_current_on();
                break;
            case 8:
                move_current_back();
            case 9:
                cari_current();
                break;
            default:
                cout << "Pilihan tidak tersedia ! ";
                break;
        }
    } while (pilih != 9);
}
