//
//  main.cpp
//  tpDLL
//
//  Created by Dhona Aribah on 20/10/24.
//
#include <iostream>
#include "Header.h"

using namespace std;

int main() {
    List L1,L2,L3;
    address P, Q;
    infotype data;
    int j, k;
    string judul;
    
    createList_103032330156(L1);
    createList_103032330156(L2);
    createList_103032330156(L3);
    
    cout << "=========== PLAYLIST PERTAMA ===========" << endl;
        for (j = 0; j < 3; j++){
            cout << endl << "Band ke-" <<  j+1 << ": ";
            cin >> data.band;
            cout << endl << "Judul Lagu ke-" <<  j+1 << ": ";
            cin >> data.song;
            P = createNewElmt_103032330156(data);
            insertLast_103032330156(L1,P);
        }
    cout << endl <<  "=========== PLAYLIST KEDUA ===========" << endl;
        for (k = 0; k < 3; k++){
            cout << endl << "Band ke-" <<  k+1 << ": ";
            cin >> data.band;
            cout << endl << "Judul Lagu ke-" <<  k+1 << ": ";
            cin >> data.song;
            P = createNewElmt_103032330156(data);
            insertFirst_103032330156(L2,P);
        }

    cout << endl << "===== LIST PLAYLIST PERTAMA ======" << endl;
    displayList_103032330156(L1);
    cout << endl << "===== LIST PLAYLIST KEDUA =====" << endl;
    displayList_103032330156(L2);
    concat_103032330156(L1,L2,L3);
    cout << endl << "===== DAFTAR SELURUH PLAYLIST =====" << endl;
    displayList_103032330156(L3);
    
    cout << endl << "===== SISA PLAYLIST SETELAH DELETE FIRST =====" << endl;
    deleteFirst_103032330156(L3,P);
    displayList_103032330156(L3);
    cout << endl << "===== SISA PLAYLIST SETELAH DELETE LAST =====" << endl;
    deleteLast_103032330156(L3,P);
    displayList_103032330156(L3);
    
    cout << endl << "===== PLAYLIST DELETE AFTER KETIKA =====" << endl;
    cout << "Judul lagu yang akan dihapus setelah lagu: ";
    cin >> judul;
    Q = findSong_103032330156(judul, L3);
    if (Q != NULL){
        deleteAfter_103032330156(L3,Q,P);
        cout << endl << "===== DAFTAR UPDATE PLAYLIST =====" << endl;
        displayList_103032330156(L3);
    }
    cout << endl << "Judul Lagu yang ingin dihapus: ";
    cin >> judul;
    removeSong_103032330156(judul, L3);
    cout << endl << "===== DAFTAR UPDATE PLAYLIST =====" << endl;
    displayList_103032330156(L3);
    cout << endl << "===== PLAYLIST INSERT AFTER KETIKA =====";
    cout << endl << "Judul lagu yang ingin ditambahkan setelah lagu: ";
    cin >> judul;
    Q = findSong_103032330156(judul, L3);
    if (Q != NULL){
        cout << endl << "Judul lagu yang ingin ditambahkan: ";
        cin >> data.song;
        cout << endl << "Band yang ingin ditambahkan: ";
        cin >> data.band;
        P = createNewElmt_103032330156(data);
        insertAfter_103032330156(L3,P,Q);
        cout << endl << "===== DAFTAR UPDATE PLAYLIST =====" << endl;
        displayList_103032330156(L3);
    }
    return 0;
}



