    #include <iostream>
    #include <conio.h>
	#include <string.h>
    using namespace std;

    #define maxkal 200

    struct tumpukan
    {
        char isi[maxkal];
        int atas;
    };

    tumpukan tumkal;

    void PUSH (char x)
    {
        if(tumkal.atas == maxkal)
        {
            cout <<"\nTumpukan Sudah Penuh ! ";
            getch();
        }
        else
        {
            tumkal.atas = tumkal.atas + 1;
            tumkal.isi[tumkal.atas] = x;
        }
    }

    char  POP()
    {
        char hasil;
        if(tumkal.atas == 0)
        {
            cout << "\nTumpukan sudah kosong ! ";
            hasil = ' ';
        }
        else
        {
            hasil = tumkal.isi[tumkal.atas];
            tumkal.atas = tumkal.atas - 1;
        }
        return hasil;
    }

    int main()
    {
        int i;
        char kalimat[maxkal];

        system("cls");
        tumkal.atas = 0;

        cout <<"Aplikasi Stack untuk Membalik kalimat\n";
        cout <<"----------------------------------------\n\n";

        cout <<"Masukkan sembarang kalimat : ";
        gets(kalimat);

        system("cls");
        cout <<"\nKalimat Awal : " << kalimat;

        for(i=0;i<strlen(kalimat);i++)
        {
            PUSH(kalimat[i]);
        }
        cout <<"\n\nKalimat Setelah di Balik : ";

        for(i=0;i<strlen(kalimat);i++)
        {
            cout <<""<<POP();
        }
        return 0;
    }
