#ifndef FLIGHT_H_INCLUDED
#define FLIGHT_H_INCLUDED
#include <iostream>
#define info(P) (P)->info
#define next(P) (P)->next
#define first(L) ((L).first)

using namespace std;

struct JadwalPenerbangan {
    string kode;
    string jenis;
    string tanggal;
    string waktu;
    string asal;
    string tujuan;
    int kapasitas;
};

typedef struct elmJadwal *adr_jadwalP;

typedef JadwalPenerbangan infotype;

struct elmJadwal {
    infotype info;
    adr_jadwalP next;
};

struct ListJadwal {
    adr_jadwalP first;
};

void createListJadwal_103032300183(ListJadwal &L);
adr_jadwalP createElemenJadwal_103032300183(infotype x);
void insertLastJ_103032300183(ListJadwal &L, adr_jadwalP P);
void showJadwal_103032300183(ListJadwal L);
void deleteFirstJ_103032300183(ListJadwal &L, adr_jadwalP &P);
adr_jadwalP searchJ_103032300183(ListJadwal L, string dari, string ke, string tanggal);

#endif // FLIGHT_H_INCLUDED


