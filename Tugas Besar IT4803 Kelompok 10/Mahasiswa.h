#ifndef MAHASISWA_H
#define MAHASISWA_H

#include <string>
using namespace std;

struct elmRelation;

struct Mahasiswa {
    string NIM;
    string nama;
};

typedef Mahasiswa infotypeParent;

struct elmParent {
    infotypeParent info;
    elmParent *next;
    elmRelation *firstRel;
};

typedef elmParent *adrParent;

struct listParent {
    adrParent first;
};

void creatListParent(listparent &LP);
adrParent createElmParent(infotypeParent x);
void insertParent(listParent &LP, adrParent P);
adrParent findParent(listParent LP, string NIM);
void deleteParent(listParent &LP, string NIM);
void showAllParent(listParent LP);

#endif // MAHASISWA_H
