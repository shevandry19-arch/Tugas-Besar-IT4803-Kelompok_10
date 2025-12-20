#include <iostream>
#include "tugasbesar.h"
using namespace std;

int main(){
    ListMahasiswa L;
    ListUKM U;

    createListMahasiswa(L);
    createListUKM(U);

    string nama, nim, namaUKM, kodeUKM;

    cout << "[INPUT MAHASISWA]" << endl;
    for(int i = 0; i < 3; i++){
        cout << "Masukkan nama mahasiswa: ";
        cin >> nama;
        cout << "Masukkan nim mahasiswa : ";
        cin >> nim;
        addMahasiswa(L, createElemenMahasiswa(nama, nim));
        cout << endl;
    }

    cout << "[INPUT UKM]" << endl;
    for(int i = 0; i < 4; i++){
        cout << "Masukkan nama UKM: ";
        cin >> namaUKM;
        cout << "Masukkan kode UKM: ";
        cin >> kodeUKM;
        addUKM(U, createElemenUKM(namaUKM, kodeUKM));
        cout << endl;
    }

    cout << "[INPUT RELASI]" << endl;
    for(int i = 0; i < 4; i++){
        cout << "Masukkan NIM Mahasiswa: ";
        cin >> nim;
        cout << "Masukkan kode UKM: ";
        cin >> kodeUKM;

        adrMahasiswa mhs = searchMahasiswa(L, nim);
        adrUKM ukm = searchUKM(U, kodeUKM);

        if(mhs != nullptr && ukm != nullptr){
            addRelasi(mhs, ukm);
        } else{
            cout << "Data tidak ditemukan!" << endl;
        }
        cout << endl;
    }

    cout << "[TAMPILAN LIST]" << endl;
    displayList(L);

    return 0;
}

