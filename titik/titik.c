#include <math.h>
#include <stdio.h>
#include "titik.h"

void buatTitik(Titik *t, int x, int y)
{
    t->x = x;
    t->y = y;
}

int hitungJarak(const Titik *t1, const Titik *t2)
{
    return (int)round(sqrt(pow(t2->x - t1->x, 2) + pow(t2->y - t1->y, 2)));
}

int isTitikSama(const Titik *t1, const Titik *t2)
{
    return (t1->x == t2->x && t1->y == t2->y);
}

void printTitik(const Titik *t)
{
    printf("Titik: (%d, %d)\n", t->x, t->y);
}

void geserTitik(Titik *t, int dx, int dy)
{
    t->x += dx;
    t->y += dy;
}
