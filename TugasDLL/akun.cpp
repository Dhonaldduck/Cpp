//
//  akun.cpp
//  TugasDLL
//
//  Created by Dhona Aribah on 13/10/24.
//
#include <iostream>
#include <stdio.h>
#include "Header.h"

using namespace std;

address createNewElm(infotype akun){
    address P = new elmlist;
    info(P)= akun;
    next(P) = NULL;
    prev(P) = NULL;
    return P;
}

void insertLast(List &L, address P){
    if ( first(L) != NULL && last(L) != NULL){
        prev(P) = last(L);
        next(last(L)) = P;
        last(L) = P;
    } else {
        first(L) = P;
        last(L) = P;
    }
}

address findAkun(List L, char username){
    address P = first(L);
    while (P != NULL){
        if (info(P) == username){
            return P;
        }
    }
    return NULL;
}

void signUp(List &L, infotype akun){
    address P = first(L);
    if (findAkun(akun.username, L) == NULL) {
        P = createNewElm;
        insertLast(P,L);
}

