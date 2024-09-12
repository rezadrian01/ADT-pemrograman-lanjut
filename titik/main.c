#include <stdio.h>
#include "titik.h"

int main()
{
    Titik t1, t2;
    buatTitik(&t1, 1, 2);
    buatTitik(&t2, 4, 6);

    int jarak = hitungJarak(&t1, &t2);
    printf("Jarak antara (%d, %d) dan (%d, %d) adalah %d\n",
           t1.x, t1.y, t2.x, t2.y, jarak);

    if (isTitikSama(&t1, &t2))
    {
        printf("Titik-titik ini sama.\n");
    }
    else
    {
        printf("Titik-titik ini tidak sama.\n");
    }

    printf("Sebelum digeser: ");
    printTitik(&t1);
    geserTitik(&t1, 2, 3);
    printf("Setelah digeser: ");
    printTitik(&t1);

    return 0;
}
