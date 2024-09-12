#include <stdio.h>
#include <assert.h>
#include "lingkaran.h"

int main()
{
    Lingkaran l1;
    buatLingkaran(&l1, 2, 3, 5);
    Lingkaran l2;
    buatLingkaran(&l2, 2, 3, 10);

    tampilkanLingkaran(&l1);
    tampilkanLingkaran(&l2);

    float luas1 = hitungLuas(&l1);
    printf("Luas lingkaran l1: %.2f\n", luas1);
    assert(luas1 - 78.54 < 0.01);

    float keliling1 = hitungKeliling(&l1);
    printf("Keliling lingkaran l1: %.2f\n", keliling1);
    assert(keliling1 - 31.42 < 0.01);

    assert(isLingkaranSama(&l1, &l2) == 0);

    return 0;
}
