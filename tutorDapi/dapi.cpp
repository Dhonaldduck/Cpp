//
//  dapi.cpp
//  tutorDapi
//
//  Created by Dhona Aribah on 12/11/24.
//

#include "Header.h"

using namespace std;

bool isEmpty(List L){
    return first(L) == nil;
}

void createNewList(List &L){
    first(L) = nil;
    last(L) = nil;
};

address createNewElm(infotype data){
    address p = new elmList;
    info(p) = data;
    next(p) = nil;
    prev(p) = nil;

    return p;
};

void insertFirst(List &L, address p){
    if (first(L) == nil){
        first(L) = p;
        last(L) = p;
    }else {
        next(p) = first(L);
        prev(first(L)) = p;
        first(L) = p;
    };
};

void insertLast(List &L, address p){
    if (last(L) == nil){
        first(L) = p;
        last(L) = p;
    }else {
        prev(p) = last(L);
        next(last(L)) = p;
        last(L) = p;
    };
};

void deleteFirst(List &L, address &p){
    if (first(L) == nil){
        cout << "LIst Kosong" << endl;
    }else if (first(L) == last(L)){
        p = first(L);
        first(L) = nil;
        last(L) = nil;
    }else {
        p = first(L);
        first(L) = next(p);
        next(p) = nil;
        prev(first(L)) = nil;
    };
};

void deleteLast(List &L, address &p){
    if (first(L) == nil){
        cout << "LIst Kosong" << endl;
    }else if (first(L) == last(L)){
        p = first(L);
        first(L) = nil;
        last(L) = nil;
    }else {
        p = last(L);
        last(L) = prev(p);
        prev(p) = nil;
        next(last(L)) = nil;
    };
};

void deleteAfter(List &L, address &prec, address &p){
    if (first(L) == nil){
        cout << "List Kosong" << endl;
    }else if (first(L) == last(L)){
        p = first(L);
        first(L) = nil;
        last(L) = nil;
        prec = nil;
    }else {
        prec = prev(p);
        next(prec) = next(p);
        prev(next(p)) = prec;
        prev(p) = nil;
        next(p) = nil;
    };
};

address findDriver(string driver, List L){
    address P = first(L);
    while(P != nil){
        if(info(P).nama == driver){
            return P;
        }
        P = next(P);
    }
    return NULL;
}

void removeDriver(string driver, List &L){
    if(isEmpty(L)){
        cout << "list kosong" << endl;
    }else{
        address P = findDriver(driver, L);
        if(P != nil){
            if(P == first(L)){
                deleteFirst(L, P);
            }else if(P == last(L)){
                deleteLast(L, P);
            }else{
                deleteAfter(L, prev(P), P);
            }
        } else {
            cout << "drivernya ngga adaa" << endl;
        }
    }
}

void displayList(List L){
    if(isEmpty(L)){
        cout << "list kosong" << endl;
    }
    address p = first(L);
    while (p != nil) {
        cout << "nama driver: " << info(p).nama << endl;
        cout << "rating driver: " << info(p).rating << endl;
        p = next(p);
    }
    cout << endl;
};

