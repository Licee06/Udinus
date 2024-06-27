//NIM: A12.2023.07058
//NAMA: FICO ALDI SAPUTRO

#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <windows.h>

    using namespace std;

    COORD coord= {0,0};

    void gotoxy(int x, int y)
    {
    coord.X=x;
    coord.Y=y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);
    }

    struct spgw
    {
        char nip[5];
        char x;
        char nama[30];
        char jeniskel;
        int agama;
        int anak;
        int gaji;
      char bagian;
    };

    spgw datapgw[20];

    int a = 0;
    int brs, klm, klmi;
    char ketjk[10]; char ketagama[15]; char ketbagian[15];
    int tanak, terima;

    int jml(const char *temp){
        int x = 0;
        for ( ;*temp != '\0'; temp++) ++x;
        return x;
    }

    void tampilan()
    {
        system("cls");
        brs = 4, klm = 10, klmi = klm + 27;
        gotoxy(klm, brs++); cout << "Input Data Pegawai";
        gotoxy(klm, brs++); cout << "===============================================";
        gotoxy(klm, brs++); cout << "1. NIP                 : ";
        gotoxy(klm, brs++); cout << "2. Nama                : ";
        gotoxy(klm, brs++); cout << "3. Bagian [S.A.G.P]    : ";
        gotoxy(klm, brs++); cout << "4. Jenis Kelamin [L/P] : ";
        gotoxy(klm, brs++); cout << "5. Agama [1..5]        : ";
        gotoxy(klm, brs++); cout << "6. Anak                : ";
        gotoxy(klm, brs++); cout << "7. Gaji Pokok          : ";
        gotoxy(klm, brs++); cout << "   Tunjangan Anak      : ";
        gotoxy(--klmi, brs++); cout << "============ +";
        gotoxy(klm, brs++); cout << "   Terima Gaji         : ";
    }

    void isinip() {
        gotoxy(klmi, brs); cout << ".....           ";
        gotoxy(klmi, brs++); cin >> datapgw[a].nip;
        if (jml(datapgw[a].nip) != 5) {
            brs--;
            isinip();
        }
    }

    void isinama (){
        gotoxy(klmi, brs); cout << ".......................     ";
        cin.ignore();
        gotoxy(klmi, brs++); gets(datapgw[a].nama);
        if (jml(datapgw[a].nama) < 5) {
            brs--;
            isinama();
        }
        gotoxy(klmi, brs); cin >> datapgw[a].bagian;
        switch (datapgw[a].bagian)
        {
            case 'S' : case 's' : strcpy(ketbagian, "SDM");
                break;
            case 'A' : case 'a' : strcpy(ketbagian, "Administrasi");
                break;
            case 'G' : case 'g' : strcpy(ketbagian, "Gudang");
                break;
            case 'P' : case 'p' : strcpy(ketbagian, "Produksi");
                break;
            default : strcpy(ketbagian, "pegawai");
                break;
        }
        gotoxy(klmi, brs++); cout << ketbagian;
    }

    void isijeniskel(){

        gotoxy(klmi, brs); cout << ".           ";
        gotoxy(klmi, brs); cin >> datapgw[a].jeniskel;
        if (datapgw[a].jeniskel == 76 || datapgw[a].jeniskel == 108)
            strcpy(ketjk, "Laki-laki");
        else
            strcpy(ketjk, "Perempuan");
        gotoxy(klmi, brs++); cout << ketjk;
    }

    void isiagama(){
        gotoxy (klmi, brs); cout << ".          ";
        gotoxy (klmi, brs); cin >> datapgw[a].agama;
        switch (datapgw[a].agama)
        {
            case 1 : strcpy(ketagama, "Islam");
                     break;
            case 2 : strcpy(ketagama, "Kristen");
                     break;
            case 3 : strcpy(ketagama, "Protestan");
                     break;
            case 4 : strcpy(ketagama, "Hindu");
                     break;
            case 5 : strcpy(ketagama, "Budha");
                     break;
            default : strcpy(ketagama, "Kepercayaan");
                     break;
        }
        gotoxy(klmi, brs++); cout << ketagama;
    }
    void isianak() {
        gotoxy(klmi, brs); cout << "..          ";
        gotoxy(klmi, brs++); cin >> datapgw[a].anak;
        if (datapgw[a].anak > 3)
            tanak = 3 * 5000;
        else
            tanak = datapgw[a].anak * 5000;
    }

    void isigaji() {
        gotoxy(klmi, brs); cout << ".......         ";
        gotoxy(klmi, brs++); cin >> datapgw[a].gaji;
    }

    void hitungterima() {
        terima = datapgw[a].gaji + tanak;
        gotoxy(klmi, brs++); cout << tanak;
        brs++;
        gotoxy(klmi, brs++); cout << terima;
    }

    void cetakjudullap()
    {
        system("cls");
        cout << "Laporan Gaji Pegawai\n";
            //   12345678901234567890123456789012345678902345678901234567890
        cout << "----------------------------------------------------------------------------\n";
        cout << " No   NIP          Nama            Jenis Kel. Anak ";
        cout << "Tunj. Anak         Terima\n";
        cout << "----------------------------------------------------------------------------\n";
    }

    void cetakdata()
    {
        int no, len = a;
        brs = 5; klm = 1;
        int totalgaji = 0;

        cetakjudullap();
        for (int pss = 0; pss < len; pss++)
        {
            no = pss + 1;
            gotoxy((klm + 1), brs); cout << no;
            gotoxy((klm + 5), brs); cout << datapgw[pss].nip;
            gotoxy((klm + 15), brs); cout << datapgw[pss].nama;
        if (datapgw[pss].jeniskel == 76 || datapgw[pss].jeniskel == 108)
                strcpy(ketjk, "Laki-laki");
            else
                strcpy(ketjk, "Perempuan");
            gotoxy((klm+33), brs); cout << ketjk;
            gotoxy((klm+46), brs); cout << datapgw[pss].anak;

            if (datapgw[pss].anak > 3)
                tanak = 3 * 5000;
            else
                tanak = datapgw[pss].anak * 5000;
            gotoxy ((klm+53), brs); cout << tanak;

            terima = datapgw[pss].gaji * tanak;
            gotoxy((klm+65), brs); cout << terima;

            totalgaji += terima;
            brs++;
        }
        cout << endl;
        cout << "------------------------------------------------------\n";
        cout << "Total Gaji Keseluruhan : Rp. " << totalgaji << endl;
        cout << "------------------------------------------------------\n";
        cout << "data sudah tercetak semua\n";
    }

    int main()
    {
        char tanya;
        do{
            tampilan();

            brs = 6;
            isinip();
            isinama();
            isijeniskel();
            isiagama();
            isianak();
            isigaji();

            hitungterima();

            brs++;
            gotoxy(klm, brs); cout << "Isi Data Lagi [y/t] : ";
            cin >> tanya;
            a++;
        } while (tanya == 89 || tanya == 121);
        gotoxy(klm, brs); cout << "                         ";
        gotoxy(klm, brs); cout << "Cetak Data [y/t] : ";
        cin >> tanya;
        if (tanya == 89 || tanya == 121)
        {
            cetakdata();
        }

        getch();
    }

