#include <iostream>
using namespace std;

class bank {
private :
    string nama;
    int nomor_rekening;
    char jenis[1];
    int setoran = 0;
    int total_saldo = 0;
public :

    void data_user(){
        cout << " Masukkan Nama Anda          : ";
        cin.ignore();
        getline(cin,nama);
        cout << " Masukkan Nomor Rekening     : ";
        cin >> nomor_rekening;
        cout << " Masukkan Kelas Rekening     : ";
        cin >> jenis;
        cout << " Masukkan Saldo Anda         : ";
        cin >> total_saldo;
        cout << endl;

        cout << " Nama Anda         : " <<nama <<endl;
        cout << " No Rekening       : " <<nomor_rekening <<endl;
        cout << " Jenis Rekening    : " <<jenis <<endl;
        cout << " Saldo Anda        : " <<total_saldo <<endl;
    }

    void setor(){
        cout << " Masukkan Uang Yang Ingin Disetorkan : ";
        cin >> setoran;
        cout << endl;
    }

    void menampilkan_saldo(){
    total_saldo = total_saldo + setoran;
    cout << " Total Saldo Rp. " <<total_saldo;
    cout << "\n\n";
    }

    void penarikan(){
    int tarik, info_saldo;

    cout << " Masukkan Jumlah Uang Yang Ingin Ditarik : \n\n";
    cout << " Rp. ";
    cin >> tarik;
    cout <<endl;
    info_saldo = total_saldo - tarik;
    cout << " Sisa Saldo Rp. " << info_saldo <<endl;
    cout <<endl;
    }

    void keluar(){
    exit(1);
    }
};

int main(){
    bank y;
    int pilihan;
    while(1){
        cout << "|======================================================|" <<endl;
        cout << "|            SELAMAT DATANG DI BANK FANDI              |" <<endl;
        cout << "|======================================================|" <<endl;
        cout << "|            1. Data Anda                              |" <<endl;
        cout << "|            2. Setor Uang                             |" <<endl;
        cout << "|            3. Penarikan Uang                         |" <<endl;
        cout << "|            4. Total Saldo                            |" <<endl;
        cout << "|            5. Keluar                                 |" <<endl;
        cout << "|======================================================|" <<endl;
        cout << " Masukkan Pilihan 1 - 5! : ";
        cin >> pilihan;
        cout <<endl;

    switch(pilihan){
    case 1 :
        y.data_user();
        break;
    case 2 :
        y.setor();
        cout << " Selamat Uang Anda Telah Berhasil Disetorkan \n\n";
        break;
    case 3 :
        y.penarikan();
        break;
    case 4 :
        y.menampilkan_saldo();
        break;
    case 5 :
        y.keluar();
        break;
    default :
        cout << " Format Pilihan Tidak Valid" <<endl;
        }

    }
return 0;
}
