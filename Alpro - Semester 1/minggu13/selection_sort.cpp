//NIM:A12.2023.07058
//NAMA:FICO ALDI SAPUTRO

#include <conio.h>
#include <iostream>

using namespace std;

int main(){
    const int n = 4;
    int x[n] = {4,2,5,1};
    int temp;

    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1; j<n; j++)
        {
            if(x[i] > x[j])
            {
                temp = x[i];
                x[i] = x[j];
                x[j] = temp;
            }
        }
    }
    for(int a=0; a<n; a++){
        cout << x[a] << "\t";
    }
    getch();
}

