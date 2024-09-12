#ifndef TITIK_H
#define TITIK_H

typedef struct
{
    int x;
    int y;
} Titik;

void buatTitik(Titik *t, int x, int y);
int hitungJarak(const Titik *t1, const Titik *t2);
int isTitikSama(const Titik *t1, const Titik *t2);
void printTitik(const Titik *t);
void geserTitik(Titik *t, int dx, int dy);

#endif
