#include <stdio.h>
#include <stdlib.h>

void tampilkanMatriks(int** matriks, int baris, int kolom) {
    for (int i = 0; i < baris; i++) {
        for (int j = 0; j < kolom; j++) {
            printf("%d ", matriks[i][j]);
        }
        printf("\n");
    }
}

int** jumlahMatriks(int** matriks1, int** matriks2, int baris, int kolom) {
    int** hasil = (int**)malloc(baris * sizeof(int*));
    for (int i = 0; i < baris; i++) {
        hasil[i] = (int*)malloc(kolom * sizeof(int));
        for (int j = 0; j < kolom; j++) {
            hasil[i][j] = matriks1[i][j] + matriks2[i][j];
        }
    }
    return hasil;
}

int** kurangMatriks(int** matriks1, int** matriks2, int baris, int kolom) {
    int** hasil = (int**)malloc(baris * sizeof(int*));
    for (int i = 0; i < baris; i++) {
        hasil[i] = (int*)malloc(kolom * sizeof(int));
        for (int j = 0; j < kolom; j++) {
            hasil[i][j] = matriks1[i][j] - matriks2[i][j];
        }
    }
    return hasil;
}

int** kaliMatriks(int** matriks1, int** matriks2, int baris1, int kolom1, int kolom2) {
    int** hasil = (int**)malloc(baris1 * sizeof(int*));
    for (int i = 0; i < baris1; i++) {
        hasil[i] = (int*)malloc(kolom2 * sizeof(int));
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

    printf("Masukkan jumlah baris matriks: ");
    scanf("%d", &baris);
    printf("Masukkan jumlah kolom matriks: ");
    scanf("%d", &kolom);

    printf("Masukkan elemen-elemen matriks pertama:\n");
    int** matriks1 = (int**)malloc(baris * sizeof(int*));
    for (int i = 0; i < baris; i++) {
        matriks1[i] = (int*)malloc(kolom * sizeof(int));
        for (int j = 0; j < kolom; j++) {
            scanf("%d", &matriks1[i][j]);
        }
    }

    printf("Masukkan elemen-elemen matriks kedua:\n");
    int** matriks2 = (int**)malloc(baris * sizeof(int*));
    for (int i = 0; i < baris; i++) {
        matriks2[i] = (int*)malloc(kolom * sizeof(int));
        for (int j = 0; j < kolom; j++) {
            scanf("%d", &matriks2[i][j]);
        }
    }

    int** hasilJumlah = jumlahMatriks(matriks1, matriks2, baris, kolom);
    int** hasilKurang = kurangMatriks(matriks1, matriks2, baris, kolom);
    int** hasilKali = kaliMatriks(matriks1, matriks2, baris, kolom, kolom);

    printf("Hasil penjumlahan matriks:\n");
    tampilkanMatriks(hasilJumlah, baris, kolom);
    printf("Hasil pengurangan matriks:\n");
    tampilkanMatriks(hasilKurang, baris, kolom);
    printf("Hasil perkalian matriks:\n");
    tampilkanMatriks(hasilKali, baris, kolom);

    for (int i = 0; i < baris; i++) {
        free(matriks1[i]);
        free(matriks2[i]);
        free(hasilJumlah[i]);
        free(hasilKurang[i]);
        free(hasilKali[i]);
    }
    free(matriks1);
    free(matriks2);
    free(hasilJumlah);
    free(hasilKurang);
    free(hasilKali);

    return 0;
}



