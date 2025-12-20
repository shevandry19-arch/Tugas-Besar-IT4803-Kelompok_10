#ifndef PARENT_H_INCLUDED
#define PARENT_H_INCLUDED
#include <iostream>
using namespace std;

#define nullptr NULL

struct Mahasiswa {
    string nama;
    string nim;
};

typedef struct elemenMahasiswa *adrMahasiswa;
typedef struct elemenRelasi *adrRelasi;

struct elemenMahasiswa {
    Mahasiswa info;
    adrMahasiswa next;
    adrMahasiswa prev;
    adrRelasi firstRelasi;
};

struct ListMahasiswa {
    adrMahasiswa first;
    adrMahasiswa last;
};

void createListMahasiswa(ListMahasiswa &L);
adrMahasiswa createElemenMahasiswa(string nama, string nim);
void addMahasiswa(ListMahasiswa &L, adrMahasiswa p);
adrMahasiswa searchMahasiswa(ListMahasiswa L, string nim);
void displayMahasiswa(ListMahasiswa L);

#endif // PARENT_H_INCLUDED
