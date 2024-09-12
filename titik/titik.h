#ifndef TITIK_H
#define TITIK_H

typedef struct
{
    int x, y;
} Titik;

void buatTitik(Titik *t, int x, int y);
void geserTitik(Titik *t, int dx, int dy);
int hitungJarak(const Titik *t1, const Titik *t2);
void tampilkanTitik(const Titik *t);
int isTitikSama(const Titik *t1, const Titik *t2);
void reflectTitik(Titik *t);

#endif
