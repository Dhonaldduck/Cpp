//
//  Header.h
//  TPSLL2
//
//  Created by Dhona Aribah on 14/10/24.
//
#include <iostream>
#ifndef Header_h
#define Header_h

#define info(P) P->info
#define next(P) P->next
#define first(L) L.first

using namespace std;

typedef string infotype;
typedef struct elmlist *address;
struct elmlist {
    infotype info;
    address next;
};

struct List {
    address first;
};

void createList_103032330156(List &L);
address newElement_103032330156(infotype x);
void insertLast_103032330156(List &L, address P);
void show_103032330156(List L);
address shortestName_103032330156(List L);
void showFirstKNameC_103032330156(List L, int k, char c);
int selectMenu_103032330156();

#endif /* Header_h */
