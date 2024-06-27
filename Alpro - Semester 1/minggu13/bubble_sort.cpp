//NIM:A12.2023.07058
//NAMA:FICO ALDI SAPUTRO

#include <conio.h>
#include <iostream>

using namespace std;

int main(){
    const int n = 4;
    int x[n] = {4,2,5,1};
    int temp;

    for(int i=1;i<n;i++)
    {
        for(int j=0; j<n-1; j++)
        {
            if(x[j] > x[j+1])
            {
                temp = x[j];
                x[j] = x[j+1];
                x[j+1] = temp;
            }
        }
    }
    for(int a=0; a<n; a++){
        cout << x[a] << "\t";
    }
    getch();
}
