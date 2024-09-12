#include <stdio.h>
#include <math.h>
#include "lingkaran.h"

void buatLingkaran(Lingkaran *l, int x, int y, int radius)
{
    l->x = x;
    l->y = y;
    l->radius = radius;
}

void geserLingkaran(Lingkaran *l, int dx, int dy)
{
    l->x += dx;
    l->y += dy;
}

float hitungLuas(const Lingkaran *l)
{
    return M_PI * l->radius * l->radius;
}

float hitungKeliling(const Lingkaran *l)
{
    return 2 * M_PI * l->radius;
}

void tampilkanLingkaran(const Lingkaran *l)
{
    printf("Lingkaran Pusat(%d, %d), Radius: %d\n", l->x, l->y, l->radius);
}

int isLingkaranSama(const Lingkaran *l1, const Lingkaran *l2)
{
    return l1->x == l2->x && l1->y == l2->y && l1->radius == l2->radius;
}

void perbesarLingkaran(Lingkaran *l, int faktor)
{
    l->radius *= faktor;
}
