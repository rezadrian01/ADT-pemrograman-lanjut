#ifndef LINGKARAN_H
#define LINGKARAN_H

typedef struct
{
    int x;
    int y;
    int radius;
} Lingkaran;

void buatLingkaran(Lingkaran *l, int x, int y, int radius);
float hitungLuas(const Lingkaran *l);
float hitungKeliling(const Lingkaran *l);
int isLingkaranSama(const Lingkaran *l1, const Lingkaran *l2);
void tampilkanLingkaran(const Lingkaran *l);

#endif
