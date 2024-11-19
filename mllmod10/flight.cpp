#include "Header.h"

void createListJadwal_103032300183(ListJadwal &L) {
    first(L) = NULL;
}

adr_jadwalP createElemenJadwal_103032300183(infotype x) {
    adr_jadwalP P;
    P = new elmJadwal;

    info(P).kode = x.kode;
    info(P).jenis = x.jenis;
    info(P).tanggal = x.tanggal;
    info(P).waktu = x.waktu;
    info(P).asal = x.asal;
    info(P).tujuan = x.tujuan;
    info(P).kapasitas = x.kapasitas;

    next(P) = NULL;
    return P;
}

void insertLastJ_103032300183(ListJadwal &L, adr_jadwalP P) {
    adr_jadwalP Q;
    Q = first(L);
    if (Q == NULL) {
        first(L) = P;
    } else {
        while (next(Q) != NULL) {
            Q = next(Q);
        }
        next(Q) = P;
    }
}
void showJadwal_103032300183(ListJadwal L) {
    adr_jadwalP P;
    P = first(L);
    if (P == NULL) {
        cout << "List Kosong" << endl;
    } else {
        while (P != NULL) {
            cout << info(P).kode << " " << info(P).jenis << " " << info(P).tanggal << " " << info(P).waktu << " " << info(P).asal << " " << info(P).tujuan << " " << info(P).kapasitas << endl;

            P = next(P);
        }
    }
}

void deleteFirstJ_103032300183(ListJadwal &L, adr_jadwalP &P) {
    P = first(L);
    if (P == NULL) {
        cout << "List Kosong" << endl;
    } else {
        first(L) = next(P);
        next(P) = NULL;
    }
}
adr_jadwalP searchJ_103032300183(ListJadwal L, string dari, string ke, string tanggal) {
    adr_jadwalP P, Q;
    bool status;

    P = first(L);
    status = false;
    while (P != NULL && !status) {
        if ((info(P).asal == dari) && (info(P).tujuan == ke) && (info(P).tanggal == tanggal)) {
            status = true;
            Q = P;
        } else {
            P = next(P);
        }
    }
    return P;
}

