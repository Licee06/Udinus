//NIM:A12.2023.07058
//NAMA:FICO ALDI SAPUTRO

#include <conio.h>
#include <iostream>

using namespace std;

int main()
{
    int myarray[10] = {10,14,19,26,14,31,33,35,42,44};
    int key,loc = 0;

    cout << "The input array is \n";

    for (int i=0;i<10;i++){
        cout << myarray[i] << "  ";
    }

    cout << "\n\nEnter the key to be searched : "; cin >> key;
    for (int i = 0; i < 10; i++)
    {
        if(myarray[i] == key)
        {
            loc = i+1;
            cout << "Key found at position " << loc << " in the array\n";
        }
    }

    if(loc == 0)
    {
        cout << "Could not find given key in the array";
    }
    getch();
}
