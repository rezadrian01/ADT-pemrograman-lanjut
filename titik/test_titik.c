#include <stdio.h>
#include <assert.h>
#include "titik.h"

void testTitik()
{
    Titik t1, t2;
    buatTitik(&t1, 3, 4);
    buatTitik(&t2, 6, 8);

    printTitik(&t1);
    printTitik(&t2);

    assert(t1.x == 3 && t1.y == 4);
    assert(t2.x == 6 && t2.y == 8);

    int jarak = hitungJarak(&t1, &t2);
    printf("Jarak yang dihitung: %d\n", jarak);
    assert(jarak == 5);

    assert(!isTitikSama(&t1, &t2));

    geserTitik(&t1, 1, 1);
    assert(t1.x == 4 && t1.y == 5);
    (4, 5)
}

int main()
{
    testTitik();
    printf("Semua tes berhasil!\n");
    return 0;
}
