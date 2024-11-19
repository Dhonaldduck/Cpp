//
//  Header.h
//  tpDLL
//
//  Created by Dhona Aribah on 20/10/24.
//

#include <iostream>
#include <string>
#ifndef Header_h
#define Header_h

#define info(P) P->info
#define next(P) P->next
#define prev(P) P->prev
#define first(L) L.first
#define last(L) L.last

using namespace std;

struct infotype{
    string band;
    string song;
};
typedef struct elmlist *address;
struct elmlist{
    infotype info;
    address prev;
    address next;
};
struct List{
    address first;
    address last;
};

bool isEmpty_103032330156(List L);
void createList_103032330156(List &L);
address createNewElmt_103032330156(infotype x);
void insertFirst_103032330156(List &L, address P);
void insertAfter_103032330156(List &L, address P, address &prec);
void insertLast_103032330156(List &L, address P);
void deleteFirst_103032330156(List &L, address &P);
void deleteAfter_103032330156(List &L, address prec, address &P);
void deleteLast_103032330156(List &L, address &P);
void concat_103032330156(List L1, List L2, List &L3);
address findSong_103032330156(string song, List L);
void removeSong_103032330156(string song, List &L);
void displayList_103032330156(List L);

#endif /* Header_h */
