#include <stdio.h>
#include "titik.h"

void testTitik()
{
    Titik t1, t2;
    buatTitik(&t1, 3, 4);
    buatTitik(&t2, 6, 8);

    tampilkanTitik(&t1);
    tampilkanTitik(&t2);

    printf("Jarak antara t1 dan t2: %d\n", hitungJarak(&t1, &t2));

    geserTitik(&t1, 2, 2);
    printf("Setelah t1 digeser: ");
    tampilkanTitik(&t1);

    printf("Apakah t1 dan t2 sama? %s\n", isTitikSama(&t1, &t2) ? "Ya" : "Tidak");

    reflectTitik(&t1);
    printf("Setelah t1 direfleksi: ");
    tampilkanTitik(&t1);
}
