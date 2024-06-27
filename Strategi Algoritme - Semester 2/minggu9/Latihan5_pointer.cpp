#include <iostream>
#include <stdio.h>
#include <conio.h>
using namespace std;

	int fsatu(int *a, int *b) {
		*a *= 2;
		*b *= 2;
		return 0;
	}

	int main() {
		int a, b;
		cout << "Masukkan nilai a = "; cin >> a;
		cout << "Masukkan nilai b = "; cin >> b;

		cout << "\nSebelum melewati fungsi fsatu " <<endl;
		cout << "a = " << a << endl;
		cout << "b = " << b <<endl;

		fsatu(&a, &b);
		cout << "\nSetelah melewati fungsi fsatu " <<endl;
		cout << "a = " << a << endl;
		cout << "b = " << b <<endl;

		getch();
	}

