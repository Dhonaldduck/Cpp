//
//  Header.h
//  tutorDapi
//
//  Created by Dhona Aribah on 12/11/24.
//

#include <iostream>
#define first(L) L.first
#define last(L) L.last
#define next(P) P->next
#define prev(P) P->prev
#define info(P) P->info
#define nil NULL

using namespace std;

struct infotype{
    string nama;
    int rating;
};

typedef struct elmList *address;

struct elmList{
    address next;
    address prev;
    infotype info;
};

struct List{
    address first;
    address last;
};

bool isEmpty(List L);
void createNewList(List &L);
address createNewElm(infotype data);
void insertFirst(List &L, address p);
void insertLast(List &L, address p);
void deleteFirst(List &L, address &p);
void deleteLast(List &L, address &p);
void deleteAfter(List &L, address &prec, address &p);
address findDriver(string driver, List L);
void removeDriver(string driver, List &L);
void displayList(List L);

