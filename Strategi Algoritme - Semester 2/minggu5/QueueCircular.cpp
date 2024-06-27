#include <iostream>
#include <conio.h>
#include <stdio.h>
using namespace std;
#define MAX 10

int antrian[MAX];
int front = -1;
int rear = -1;

//cek apakah antrian penuh...................
bool isFull()
{
    if ((front == rear + 1) || (front == 0 && rear == MAX - 1)){
        return true;
    }
    else
        return false;
}

//cek apakah antrian kosong........................
bool isEmpty()
{
    return front == -1;
}

//menambahkan data ke antrian........................
void enqueue() {
    if (isFull())
    {
        cout << "\nAntrian penuh    ! ";
        getch();
    }
    else
    {
        int xantrian;
        cout << "\nMasukkan antrian : ";cin >> xantrian;

        if (front == -1)
            front = 0;

        rear = (rear + 1) % MAX;
        antrian[rear] = xantrian;
    }
}

//mengambil data dari antrian...........................
void dequeue()
{
    int xdequeue;
    if (isEmpty())
    {
        cout << "\nAntrian masih kosong ! ";
    }
    else
    {
        xdequeue = antrian[front];
        antrian[front] = 0;
        if (front == rear) {
            front = rear = -1;
        }
        else {
            front = (front + 1) % MAX;
        }
        cout << "\nMengambil antrian \"" << xdequeue << "\"";
        cout << endl;
    }
getch();
}

//Menampilkan isi antrian..............................
void printQueue() {
    if (isEmpty())
    {
        cout << "\nAntrian kosong ! ";
    }
    else {
        cout << "\n\nKondisi Antrian : \n\n";
        cout << "==== | ";
        for (int i = MAX-1; i >= 0; i--)
        {
            if (antrian[i] == 0)
                cout << "  | ";
            else
                cout << antrian[i] << " | ";
        }
        cout << "==== \n";
        cout << "Front = " << front << endl;
        cout << "Rear  = " << rear << endl;
        cout << "\nEnter kembali ke Menu ";
    }
    getch();
}

//program utama...............................................
int main()
{
    int pilih;
    do
    {
        //Tampilan menu................................
        system("cls");
        cout << "-----------------------------------------\n"
            << "Menu Pilihan Circular Queue\n"
            << "-----------------------------------------\n"
            << " [1] Enqueue / Tambah Antrian \n"
            << " [2] Dequeue / Hapus antrian \n"
            << " [3] PrintDequeue / Cetak Antrian \n"
            << " [4] Keluar \n\n"
            << "-----------------------------------------\n"
            << "Masukkan pilihan : "; cin >> pilih;
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
            cout << "PIlihan tidak tersedia ! ";
            break;
        }
    } while (pilih != 4);
}
