#include <iostream>
using namespace std;

int main(){
    int jumlah_baris;

    cout << "Program Pola " << endl;
    cout << "==============" << endl;
    cout << "Masukkan Jumlah Baris Yang Di inginkan : " << endl;
    cin >> jumlah_baris;

    cout<< endl;
    for (int i = 1; i <= jumlah_baris; i++){
        for (int j = jumlah_baris; j>= i; j--){
            cout << "* ";
        }
        cout << endl;
    }

return 0;
}

