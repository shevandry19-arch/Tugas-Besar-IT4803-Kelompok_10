#ifndef RELASI_H_INCLUDED
#define RELASI_H_INCLUDED
#include "child.h"

typedef struct elemenRelasi *adrRelasi;

struct elemenRelasi {
    adrUKM ukm;
    adrRelasi next;
};

adrRelasi createElemenRelasi(adrUKM u);
void addRelasi(adrMahasiswa &p, adrUKM u);
void displayRelasi(ListMahasiswa L);

#endif // RELASI_H_INCLUDED
