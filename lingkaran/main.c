#include <stdio.h>
#include "lingkaran.h"

int main()
{
    Lingkaran l;
    buatLingkaran(&l, 1, 1, 5);

    float luas = hitungLuas(&l);
    float keliling = hitungKeliling(&l);

    printf("Lingkaran dengan pusat (%d, %d) dan radius %d:\n", l.x, l.y, l.radius);
    printf("Luas: %.2f\n", luas);
    printf("Keliling: %.2f\n", keliling);

    return 0;
}
