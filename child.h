#ifndef CHILD_H_INCLUDED
#define CHILD_H_INCLUDED
#include <iostream>
using namespace std;

#define nullptr NULL

struct UKM {
    string nama;
    string kode;
};

typedef struct elemenUKM *adrUKM;

struct elemenUKM {
    UKM info;
    adrUKM next;
};

struct ListUKM {
    adrUKM first;
};

void createListUKM(ListUKM &L);
adrUKM createElemenUKM(string nama, string kode);
void addUKM(ListUKM &L, adrUKM u);
adrUKM searchUKM(ListUKM L, string kode);
void displayUKM(ListUKM L);

#endif // UKM_H_INCLUDED
