//header file.........................................................
	#include <conio.h>
	#include <windows.h>
	#include <iostream>
	using namespace std;

	#define maxstack 4

	//pendeklarasian structumkal.........................................
	struct STACK
	{
		int top;
		int data[5];
	};

	int isidata;
	STACK tumpukan;

	//fungsi boolean untuk mengetahui apakah stack penuh..................
	bool isfull()
	{
		if(tumpukan.top == maxstack)
			return true;
		else
			return false;
	}

	//fungsi boolean untuk mengetahui apakah stack kosong.................
	bool isempty()
	{
		if(tumpukan.top == -1)
			return true;
		else
			return false;
	}

	//fungsi untuk menambahkan data pada stack............................
	void push()
	{
		if(isfull() == true)
        {
            cout << "\nMaaf, stack penuh ! ";
            getch();
        }
        else
        {
            cout << "\nMasukkan data : ";
            cin >> isidata;

            tumpukan.top++;
            tumpukan.data[tumpukan.top] = isidata;
        }
	}

	//fungsi untuk mengambil data pada stack...............................
	void pop()
	{
        if(isempty() == true)
        {
            cout << "\nData telah kosong !";
            getch();
        }
        else
        {
            cout << "\nData yang di POP : ";
            cout << tumpukan.data[tumpukan.top] << ", Enter !";
            tumpukan.data[tumpukan.top] = 0;
            tumpukan.top--;

            getch();
        }
	}

	//fungsi untuk mencetak data pada stack…………………………………………….
	void cetak()
	{
		printf("\nData yang terdapat dalam stack : \n");
		printf("----------------------------------\n\n");
		for(int i=4; i>=0; i--)
        {
            if(tumpukan.data[i] > 0)
                cout <<"\t|| " << tumpukan.data[i] << " ||\n";
            else
                cout << "\t||   ||\n";
        }
        cout << "\t||===||\n";
        getch();
	}

	//fungsi untuk membersihkan data dalam stack…………………………….
	void kosongkan()
	{
		tumpukan.top = -1;
		for(int a=0; a<=maxstack; a++)
        {
            tumpukan.data[a] = 0;
        }
	}

	//fungsi utama.................................................
	int main()
	{
		kosongkan();
		int pilihan;

		do
		{
			system("cls");
			cout << "PROGRAM STACK\n";
			cout << "========================\n";
			cout << "Pilihan Menu : \n";
			cout << "1. Push stack\n";
			cout << "2. Pop stack\n";
			cout << "3. Cetak\n";
			cout << "4. Bersihkan stack\n";
			cout << "5. Exit\n\n";

			cout << "Menu pilihan Anda : ";
			cin >> pilihan;

			switch (pilihan)
			{
				case 1	: push();
						  break;
				case 2	: pop();
						  break;
				case 3	: cetak();
						  break;
				case 4	: kosongkan();
						  break;

				default	: break;
			}
		}while(pilihan < 5);

		return 0;
	}

