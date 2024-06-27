#include <iostream>
using namespace std;

namespace A //lemari perpustakaan A
namespace A //lemari perpustakaan A
{
    int x = 5;
    void printX()
    {
        // function statements goes here
        cout<<"Nilai X dari A : " << x<<endl;
    }
}

namespace B //lemari perpustakaan B
{
    int x=10;
    void printX()
    {
        //function statements goes here
        cout<<"Nilai X dari B : " << x << endl;
    }
}

int main ()
{
    A::printX() ;
    B::printX();

    return 0;
}
//namespace bisa diartikan seperti lemari perpustakaan yang harus ada jika menggunakan cout dalam program yang kita ketik seperti diaats yang sudah dikomenkan
