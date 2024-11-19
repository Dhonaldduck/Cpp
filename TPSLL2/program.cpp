//
//  program.cpp
//  TPSLL2
//
//  Created by Dhona Aribah on 14/10/24.
//
#include <iostream>
#include <stdio.h>
#include "Header.h"

using namespace std;

void createList_103032330156(List &L) {
    first(L) = NULL;
}

address newElement_103032330156(infotype x) {
    address P = new elmlist;
    info(P) = x;
    next(P) = NULL;
    return P;
}

void insertLast_103032330156(List &L, address P) {
    address Q;
    if (first(L) == NULL) {
        first(L) = P;
    } else {
        Q = first(L);
        while (next(Q) != NULL) {
            Q = next(Q);
        }
        next(Q) = P;
    }
}

void show_103032330156(List L) {
    address P = first(L);
    cout << "Data pengunjung: " << endl;
    while (P != NULL) {
        cout << info(P) << ", ";
        P = next(P);
    }
    cout << endl;
}

address shortestName_103032330156(List L) {
    if (first(L) == NULL) return NULL;
    address P = first(L);
    address namaTerpendek = P;
    while (P != NULL) {
        if (info(P).length() < info(namaTerpendek).length()) {
            namaTerpendek = P;
        }
        P = next(P);
    }
    return namaTerpendek;
}

void showFirstKNameC_103032330156(List L, int k, char c) {
    address P = first(L);
    int h = 0;
    while (P != NULL && h < k) {
        if (!info(P).empty() && info(P)[0] == c) {  // Check if the name starts with 'c'
            cout << info(P) << endl;
            h++;
        }
        P = next(P);
    }
    if (h == 0) {
        cout << "Tidak ada nama pengunjung yang memiliki awalan nama berhuruf " << c << endl;
    } else if (h < k) {
        cout << "Hanya ada " << h << " pengunjung yang memiliki nama berawalan huruf " << c << endl;
    }
}


int selectMenu_103032330156() {
    cout << "================= MENU =================" << endl;
    cout << "1. Menambahkan N data baru" << endl;
    cout << "2. Menampilkan semua data" << endl;
    cout << "3. Mencari data nama terpendek" << endl;
    cout << "4. Menampilkan data dengan huruf pilihan" << endl;
    cout << "0. Exit" << endl;
    cout << "Pilihan Menu: ";

    int input = 0;
    cin >> input;
    return input;
}
