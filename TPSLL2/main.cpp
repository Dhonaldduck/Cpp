//
//  main.cpp
//  TPSLL2
//
//  Created by Dhona Aribah on 14/10/24.
//

#include "Header.h"
#include <iostream>
using namespace std;

int main() {
    List L;
    int pilihan, jumlahData, cariK;
    infotype data;
    address p, namaTerpendek;
    char awal;
    string ny;

    createList_103032300183(L);
    pilihan = selectMenu_103032300183();
    while (pilihan != 0) {
        switch (pilihan) {
            case 1:
                cout << "Jumlah data yang akan ditambahkan: ";
                cin >> jumlahData;
                cin.ignore();  
                for (int i = 1; i <= jumlahData; i++) {
                    cout << "Masukkan Nama Pengunjung: ";
                    getline(cin, data);
                    p = newElement_103032300183(data);
                    insertLast_103032300183(L, p);
                    cout << "Data berhasil ditambahkan." << endl;
                }
                break;

            case 2:
                if (first(L) == NULL) {
                    cout << "Tidak ada data untuk ditampilkan." << endl;
                } else {
                    show_103032300183(L);
                }
                break;

            case 3:
                if (first(L) == NULL) {
                    cout << "Tidak ada data untuk dicari." << endl;
                } else {
                    namaTerpendek = shortestName_103032330156(L);
                    cout << "Nama pengunjung terpendek terakhir adalah: " << info(namaTerpendek) << endl;
                }
                break;

            case 4:
                if (first(L) == NULL) {
                    cout << "Tidak ada data untuk ditampilkan." << endl;
                } else {
                    cout << "Berapa data yang anda ingin lihat: ";
                    cin >> cariK;
                    cout << "Huruf pertama apa yang anda ingin lihat: ";
                    cin >> awal;
                    showFirstKNameC_103032330156(L, cariK, awal);
                }
                break;

            default:
                cout << "Pilihan tidak valid. Silakan coba lagi." << endl;
                break;
        }

        cout << "Kembali ke menu utama? (Y/N) ";
        cin >> ny;
        if (ny == "Y" || ny == "y") {
            pilihan = selectMenu_103032330156();
        } else {
            break;
        }
    }

    cout << "ANDA TELAH KELUAR DARI PROGRAM" << endl;
    return 0;
}
