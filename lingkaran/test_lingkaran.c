#include <stdio.h>
#include "lingkaran.h"

void testLingkaran()
{
    Lingkaran l1, l2;
    buatLingkaran(&l1, 2, 3, 5);
    buatLingkaran(&l2, 2, 3, 10);

    tampilkanLingkaran(&l1);
    tampilkanLingkaran(&l2);

    printf("Luas lingkaran l1: %.2f\n", hitungLuas(&l1));
    printf("Keliling lingkaran l1: %.2f\n", hitungKeliling(&l1));

    geserLingkaran(&l1, 3, 4);
    printf("Setelah l1 digeser: ");
    tampilkanLingkaran(&l1);

    printf("Apakah l1 dan l2 sama? %s\n", isLingkaranSama(&l1, &l2) ? "Ya" : "Tidak");

    perbesarLingkaran(&l1, 2);
    printf("Setelah l1 diperbesar: ");
    tampilkanLingkaran(&l1);
}
