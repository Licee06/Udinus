#include <iostream>
#include <conio.h>
#include <stdio.h>
using namespace std;

	int main ()
	{
		int nilai1 = 5, nilai2 = 15;
		int *p1, *p2;

		p1 = &nilai1;
		p2 = &nilai2;

		*p1 = 10;
		*p2 = *p1;

		p1 = p2;
		p2 = p1;

		cout << "nilai1 = " << nilai1 << '\n';
		cout << "nilai2 = " << nilai2 << '\n';
		getch();
	}


