//
//  program.cpp
//  tpDLL
//
//  Created by Dhona Aribah on 20/10/24.
//

#include <stdio.h>
#include "Header.h"

using namespace std;

bool isEmpty_103032330156(List L){
    return first(L) == NULL;
}

void createList_103032330156(List &L) {
    first(L) = NULL;
    last(L) = NULL;
}

address createNewElmt_103032330156(infotype x){
    address P = new elmlist;
    info(P) = x;
    next(P) = NULL;
    prev(P) = NULL;
    return P;
}

void insertFirst_103032330156(List &L, address P){
    if (isEmpty_103032330156(L)) {
        first(L) = P;
        last(L) = P;
    } else {
        next(P) = first(L);
        prev(first(L)) = P;
        first(L) = P;
    }
}

void insertAfter_103032330156(List &L, address P, address &prec) {
    if (next(prec) == NULL) {
        insertLast_103032330156(L, P);
    } else {
        next(P) = next(prec);
        prev(P) = prec;
        prev(next(prec)) = P;
        next(prec) = P;
    }
}


void insertLast_103032330156(List &L, address P){
    if (first(L) == NULL){
        first(L) = P;
        last(L) = P;
    } else {
        prev(P) = last(L);
        next(last(L)) = P;
        last(L) = P;
    }
}

void deleteFirst_103032330156(List &L, address &P){
    if (first(L) == last(L)){
        P = first(L);
        first(L) = NULL;
        last(L) = NULL;
    } else {
        P = first(L);
        first(L) = next(P);
        prev(first(L)) = NULL;
        next(P) = NULL;
    }
}

void deleteAfter_103032330156(List &L, address prec, address &P) {
    if (next(prec) != NULL) {
        P = next(prec);
        next(prec) = next(P);
        if (next(P) != NULL) {
            prev(next(P)) = prec;
        } else {
            last(L) = prec;
        }
        next(P) = NULL;
        prev(P) = NULL;
    }
}

void deleteLast_103032330156(List &L, address &P) {
    if (isEmpty_103032330156(L)) {
        cout << "List kosong" << endl;
    } else if (first(L) == last(L)) {
        P = last(L);
        first(L) = NULL;
        last(L) = NULL;
    } else {
        P = last(L);
        last(L) = prev(P);
        next(last(L)) = NULL;
        prev(P) = NULL;
    }
}

void concat_103032330156(List L1, List L2, List &L3){
    createList_103032330156(L3);
    address P = first(L1);
    while (P != NULL) {
        address newElmt = createNewElmt_103032330156(info(P));
        insertLast_103032330156(L3, newElmt);
        P = next(P);
    }
    P = first(L2);
    while (P != NULL) {
        address newElmt = createNewElmt_103032330156(info(P));
        insertLast_103032330156(L3, newElmt);
        P = next(P);
    }
}

address findSong_103032330156(string judul, List L){
    address P = first(L);
    while (P != NULL) {
        if (info(P).song == judul) {
            return P;
        }
        P = next(P);
    }
    return NULL;
}

void removeSong_103032330156(string judul, List &L) {
    if (isEmpty_103032330156(L)) {
        cout << "List kosong" << endl;
    } else {
        address P = findSong_103032330156(judul, L);
        if (P != NULL) {
            if (P == first(L)) {
                deleteFirst_103032330156(L, P);
            } else if (P == last(L)) {
                deleteLast_103032330156(L, P);
            } else {
                deleteAfter_103032330156(L, prev(P), P);
            }
        } else {
            cout << "Lagu tidak ditemukan." << endl;
        }
    }
}


void displayList_103032330156(List L) {
    if (isEmpty_103032330156(L)) {
        cout << "List kosong." << endl;
        return;
    }
    address P = first(L);
    while (P != NULL) {
        cout << "Group Band: " << info(P).band << endl;
        cout << "Lagu: " << info(P).song << endl;
        P = next(P);
    }
}


