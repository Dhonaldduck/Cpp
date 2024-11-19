#include <iostream>
#include "Header.h"

using namespace std;

int main() {
    ListJadwal L;
    int i, n;
    infotype x;
    adr_jadwalP P;
    string dari, ke, tanggal;
    
    createListJadwal_103032300183(L);
    cout << "Berapa jadwal penerbangan yang akan anda inputkan : ";
    cin >> n;
    for (i = 1; i <= n; i++) {
        cout << "Data ke-" << i << endl;
        cout << "Kode : ";
        cin >> x.kode;
        cout << "Jenis : ";
        cin >> x.jenis;
        cout << "Tanggal : ";
        cin >> x.tanggal;
        cout << "Waktu : ";
        cin >> x.waktu;
        cout << "Asal : ";
        cin >> x.asal;
        cout << "Tujuan : ";
        cin >> x.tujuan;
        cout << "Kapasitas : ";
        cin >> x.kapasitas;
        P = createElemenJadwal_103032300183(x);
        insertLastJ_103032300183(L, P);
    }

    cout << "Hapus jadwal penerbangan" << endl;
    deleteFirstJ_103032300183(L, P);
    showJadwal_103032300183(L);
    cout << "Jadwal penerbangan pertama berhasil dihapus" << endl;
    cout << "Cari jadwal penerbangan" << endl;
    cout << "Dari : ";
    cin >> dari;
    cout << "Ke : ";
    cin >> ke;
    cout << "Tanggal : ";
    cin >> tanggal;
    searchJ_103032300183(L, dari, ke, tanggal);
    
    return 0;
}

