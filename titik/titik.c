#include <stdio.h>
#include <stdlib.h>
#include "titik.h"

void buatTitik(Titik *t, int x, int y)
{
    t->x = x;
    t->y = y;
}

void geserTitik(Titik *t, int dx, int dy)
{
    t->x += dx;
    t->y += dy;
}

int hitungJarak(const Titik *t1, const Titik *t2)
{
    return abs(t1->x - t2->x) + abs(t1->y - t2->y);
}

void tampilkanTitik(const Titik *t)
{
    printf("Titik(%d, %d)\n", t->x, t->y);
}

int isTitikSama(const Titik *t1, const Titik *t2)
{
    return t1->x == t2->x && t1->y == t2->y;
}

void reflectTitik(Titik *t)
{
    t->x = -t->x;
    t->y = -t->y;
}
