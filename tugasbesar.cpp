#include "tugasbesar.h"


void createListMahasiswa(ListMahasiswa &L){
    L.first = nullptr;
    L.last = nullptr;
}

void createListUKM(ListUKM &L){
                    L.first = nullptr;
}

adrMahasiswa createElemenMahasiswa(string nama, string nim){
    adrMahasiswa p = new elemenMahasiswa;
    p->info.nama = nama;
    p->info.nim = nim;
    p->next = nullptr;
    p->prev = nullptr;
    p->firstRelasi = nullptr;
    return p;
}

adrUKM createElemenUKM(string nama, string kode){
    adrUKM u = new elemenUKM;
    u->info.nama = nama;
    u->info.kode = kode;
    u->next = nullptr;
    return u;
}

adrRelasi createElemenRelasi(adrUKM U){
    adrRelasi r = new elemenRelasi;
    r->ukm = U;
    r->next = nullptr;
    return r;
}

void addMahasiswa(ListMahasiswa &L, adrMahasiswa p){
    if(L.first == nullptr){
        L.first = p;
        L.last = p;
    } else{
        L.last->next = p;
        p->prev = L.last;
        L.last = p;
    }
}

void addUKM(ListUKM &L, adrUKM u){
    u->next = L.first;
    L.first = u;
}

void addRelasi(adrMahasiswa &p, adrUKM u){
    adrRelasi r = createElemenRelasi(u);
    r->next = p->firstRelasi;
    p->firstRelasi = r;
}

adrMahasiswa searchMahasiswa(ListMahasiswa L, string nim){
    adrMahasiswa p = L.first;
    while(p != nullptr){
        if(p->info.nim == nim){
            return p;
        }
        p = p->next;
    }
    return nullptr;
}

adrUKM searchUKM(ListUKM L, string kode){
    adrUKM u = L.first;
    while(u != nullptr){
        if(u->info.kode == kode){
            return u;
        }
        u = u->next;
    }
    return nullptr;
}

void displayList(ListMahasiswa L){
    adrMahasiswa p = L.first;
    while(p != nullptr){
        cout << "Mahasiswa: " << p->info.nama << " (" << p->info.nim << ")" << endl;
        cout << "UKM: ";

        adrRelasi r = p->firstRelasi;
        if(r == nullptr){
            cout << "-" << endl;
        } else{
            while(r != nullptr){
                cout << r->ukm->info.nama;
                if(r->next != nullptr) cout << ", ";
                r = r->next;
            }
            cout << endl;
        }
        cout << endl;
        p = p->next;
    }
}
