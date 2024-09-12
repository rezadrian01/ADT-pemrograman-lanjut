#ifndef LINGKARAN_H
#define LINGKARAN_H

typedef struct
{
    int x, y, radius;
} Lingkaran;

void buatLingkaran(Lingkaran *l, int x, int y, int radius);
void geserLingkaran(Lingkaran *l, int dx, int dy);
float hitungLuas(const Lingkaran *l);
float hitungKeliling(const Lingkaran *l);
void tampilkanLingkaran(const Lingkaran *l);
int isLingkaranSama(const Lingkaran *l1, const Lingkaran *l2);
void perbesarLingkaran(Lingkaran *l, int faktor);

#endif
