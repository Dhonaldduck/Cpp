//
//  Header.h
//  TugasDLL
//
//  Created by Dhona Aribah on 13/10/24.
//
#include <iostream>
#ifndef Header_h
#define Header_h

#define info(P) P->info
#define next(P) P->next
#define prev(P) P->prev
#define first(L) L.first
#define last(L) L.last

using namespace std;

typedef int infotype;
typedef struct elmlist *address;
struct elmlist{
    infotype info;
    address next;
    address prev;
};

struct List{
    address first;
    address last;
};

struct akun{
    char username;
    int password;
};

address createNewElm(infotype akun);
void insertLast(List &L, address P);
address findAkun(List L, char username);

#endif /* Header_h */
