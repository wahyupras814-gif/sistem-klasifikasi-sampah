#include <stdio.h>

enum JenisSampah {
    ORGANIK = 1,
    ANORGANIK,
    B3,
    KELUAR
};

int main() {
    int pilihan;
    enum JenisSampah sampah;

    do {
        printf("\n==============================\n");
        printf("  SISTEM KLASIFIKASI SAMPAH\n");
        printf("==============================\n");
        printf("1. Sampah Organik\n");
        printf("2. Sampah Anorganik\n");
        printf("3. Sampah B3\n");
        printf("4. Keluar\n");
        printf("==============================\n");
        printf("Pilih jenis sampah: ");

        if (scanf("%d", &pilihan) != 1) {
            printf("Input harus berupa angka!\n");
            return 1;
        }

        if (pilihan < ORGANIK || pilihan > KELUAR) {
            printf("Pilihan tidak valid!\n");
            continue;
        }

        sampah = pilihan;

        switch (sampah) {
            case ORGANIK:
                printf("\nKategori: SAMPAH ORGANIK\n");
                printf("Contoh: sisa makanan dan daun.\n");
                printf("Penanganan: olah menjadi kompos.\n");
                break;

            case ANORGANIK:
                printf("\nKategori: SAMPAH ANORGANIK\n");
                printf("Contoh: botol plastik dan kaleng.\n");
                printf("Penanganan: pilah untuk didaur ulang.\n");
                break;

            case B3:
                printf("\nKategori: SAMPAH B3\n");
                printf("Contoh: baterai bekas dan lampu tertentu.\n");
                printf("Penanganan: pisahkan dan serahkan ke");
                printf(" fasilitas pengelolaan yang sesuai.\n");
                printf("Jangan dicampur dengan sampah biasa.\n");
                break;

            case KELUAR:
                printf("\nTerima kasih telah menggunakan program!\n");
                break;
        }

    } while (sampah != KELUAR);

    return 0;
}
