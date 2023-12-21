#include <iostream>
#include <vector>

using namespace std;

// Fungsi untuk menampilkan matriks
void tampilkanMatriks(const vector<vector<int>>& matriks) {
    for (const auto& baris : matriks) {
        for (int elemen : baris) {
            cout << elemen << " ";
        }
        cout << endl;
    }
}

// Fungsi untuk menjumlahkan dua matriks
vector<vector<int>> jumlahMatriks(const vector<vector<int>>& matriks1, const vector<vector<int>>& matriks2) {
    int baris = matriks1.size();
    int kolom = matriks1[0].size();
    vector<vector<int>> hasil(baris, vector<int>(kolom));

    for (int i = 0; i < baris; i++) {
        for (int j = 0; j < kolom; j++) {
            hasil[i][j] = matriks1[i][j] + matriks2[i][j];
        }
    }

    return hasil;
}

// Fungsi untuk mengurangkan dua matriks
vector<vector<int>> kurangMatriks(const vector<vector<int>>& matriks1, const vector<vector<int>>& matriks2) {
    int baris = matriks1.size();
    int kolom = matriks1[0].size();
    vector<vector<int>> hasil(baris, vector<int>(kolom));

    for (int i = 0; i < baris; i++) {
        for (int j = 0; j < kolom; j++) {
            hasil[i][j] = matriks1[i][j] - matriks2[i][j];
        }
    }

    return hasil;
}

// Fungsi untuk mengalikan dua matriks
vector<vector<int>> kaliMatriks(const vector<vector<int>>& matriks1, const vector<vector<int>>& matriks2) {
    int baris1 = matriks1.size();
    int kolom1 = matriks1[0].size();
    int kolom2 = matriks2[0].size();
    vector<vector<int>> hasil(baris1, vector<int>(kolom2));

    for (int i = 0; i < baris1; i++) {
        for (int j = 0; j < kolom2; j++) {
            hasil[i][j] = 0;
            for (int k = 0; k < kolom1; k++) {
                hasil[i][j] += matriks1[i][k] * matriks2[k][j];
            }
        }
    }

    return hasil;
}

int main() {
    int baris, kolom;

    // Input dimensi matriks
    cout << "Masukkan jumlah baris matriks: ";
    cin >> baris;
    cout << "Masukkan jumlah kolom matriks: ";
    cin >> kolom;

    // Input matriks pertama
    cout << "Masukkan elemen-elemen matriks pertama:" << endl;
    vector<vector<int>> matriks1(baris, vector<int>(kolom));
    for (int i = 0; i < baris; i++) {
        for (int j = 0; j < kolom; j++) {
            cin >> matriks1[i][j];
        }
    }

    // Input matriks kedua
    cout << "Masukkan elemen-elemen matriks kedua:" << endl;
    vector<vector<int>> matriks2(baris, vector<int>(kolom));
    for (int i = 0; i < baris; i++) {
        for (int j = 0; j < kolom; j++) {
            cin >> matriks2[i][j];
        }
    }

    // Operasi matriks
    vector<vector<int>> hasilJumlah = jumlahMatriks(matriks1, matriks2);
    vector<vector<int>> hasilKurang = kurangMatriks(matriks1, matriks2);
    vector<vector<int>> hasilKali = kaliMatriks(matriks1, matriks2);

    // Tampilkan hasil
    cout << "Hasil penjumlahan matriks:" << endl;
    tampilkanMatriks(hasilJumlah);

    cout << "Hasil pengurangan matriks:" << endl;
    tampilkanMatriks(hasilKurang);

    cout << "Hasil perkalian matriks:" << endl;
    tampilkanMatriks(hasilKali);

    return 0;
}
