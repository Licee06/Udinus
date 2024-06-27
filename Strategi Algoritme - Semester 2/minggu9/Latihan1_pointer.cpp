#include <stdio.h>
#include <conio.h>

	int main()
	{
		int a;
		int *p;

		//pointer p diberi nilai alamat a..............
		p = &a;

		//nilai dialamat p diberi nilai 25.............
		*p=25;
		printf("nilai a = %d", a);

		getch();
	}


