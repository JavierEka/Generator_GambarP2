#include <stdio.h>

void print_rectangle(int lebar, int tinggi) {
    for (int i = 0; i < tinggi; i++) {
        for (int j = 0; j < lebar; j++) {
            printf("*");
        }
        printf("\n");
    }
}

void print_triangle(int tinggi) {
    for (int i = 1; i <= tinggi; i++) {
        for (int j = 0; j < i; j++) {
            printf("*");
        }
        printf("\n");
    }
}

int main() {
    int lebar, tinggi, pilihan;

    while (1) {
        printf("\nPilih jenis gambar:\n");
        printf("1. Persegi Panjang\n");
        printf("2. Segitiga\n");
        printf("3. Keluar\n");
        printf("Masukkan pilihan (1, 2, atau 3): ");
        scanf("%d", &pilihan);

        if (pilihan == 1) {
            printf("Masukkan lebar persegi panjang (min 10, max 100): ");
            scanf("%d", &lebar);
            printf("Masukkan tinggi persegi panjang (min 5, max 75): ");
            scanf("%d", &tinggi);

            if (lebar < 10 || lebar > 100 || tinggi < 5 || tinggi > 75) {
                printf("Ukuran gambar tidak valid! Lebar harus di antara 10-100 dan tinggi harus di antara 5-75.\n");
            } else {
                printf("Gambar persegi panjang:\n");
                print_rectangle(lebar, tinggi);
            }
        } else if (pilihan == 2) {
            printf("Masukkan tinggi segitiga (min 5, max 75): ");
            scanf("%d", &tinggi);

            if (tinggi < 5 || tinggi > 75) {
                printf("Ukuran gambar tidak valid! Tinggi harus di antara 5-75.\n");
            } else {
                printf("Gambar segitiga:\n");
                print_triangle(tinggi);
            }
        } else if (pilihan == 3) {
            printf("Program dihentikan.\n");
            break;
        } else {
            printf("Pilihan tidak valid!\n");
        }
    }

    return 0;
}