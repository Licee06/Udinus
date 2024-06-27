    #include <iostream>
    #include <conio.h>
	#include <stdio.h>

	#define maxstack 4
	using namespace std;

	struct STACK
	{
	    int top;
	    int data[5];
	};

	int isidata;
	STACK tumpukan;

	bool isfull()
	{
	    if(tumpukan.top == maxstack)
            return true;
        else
            return false;
	}

	bool isempty()
	{
	    if(tumpukan.top == -1)
            return true;
        else
            return false;
	}

	void push ()
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

	void pop()
	{
	    if(isempty() == true)
        {
            cout << "\nData telah kosong !";
            getch();
        }
        else
        {
            cout << "\nData yang terambil : ";
            cout << tumpukan.data[tumpukan.top] << endl;
            tumpukan.data[tumpukan.top] = 0;
            tumpukan.top--;
        }
	}

	void cetak()
	{
	    printf("\nData yang terdapat dalam stack : \n");
	    printf("------------------------------\n\n");
	    for(int i=4; i>=0; i--)
        {
            if(tumpukan.data[i] > 0)
                cout <<"\t|| " << tumpukan.data[i] << " ||\n";
            else
                cout <<"\t||   ||\n";
        }
        cout << "\t||===||\n";
        getch();
	}

	void kosongkan()
	{
	    tumpukan.top = -1;
	    for(int a=0; a<=maxstack; a++)
        {
            tumpukan.data[a] = 0;
        }
	}

	int main()
	{
	    kosongkan();
	    int pilihan;

	    do
        {
            system("cls");
            cout << "PROGRAM STACK\n";
            cout << "=======================\n";
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
