#include <iomanip>
#include <iostream>
using namespace std;

	int const n = 10;
	int data[n] = {7, 0, 5, 8, 6, 8, 1, 10, 15, 75};

	void tukar(int a, int b)
	{
		int temp;
		temp = data[b];
		data[b] = data[a];
		data[a] = temp;
	}

	void bubbleSort()
	{
		for(int i=1;i<n;i++)
		{
			for(int j=0; j<n-i; j++)
			{
				if(data[j] > data[j+1]) tukar(j,j+1);
			}
		}
	}

	int main()
	{
		cout<<"===PROGRAM BUBBLE SORT==="<<endl;

		//tampilkan data awal ............................
		cout<<"\n\nCetak data awal : " << endl;
		for(int i=0; i<n; i++)
		{
			cout << setw(5) << data[i];
		}

		//proses pengurutan data...........................
		bubbleSort();

		//tampilkan data setelah diurutkan.................
		cout<<"\n\nData Setelah di Sort : " << endl;
		for(int i=0; i<n; i++)
		{
			cout << setw(5) << data[i];
		}

		cout << "\n\nSorting Selesai";
		return 0;
	}

