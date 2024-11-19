#include "Header.h"

int main() {
    List L;
    createNewList(L);

    infotype data;
    address p;
    int jumlahDriver = 4; // Menginput 4 driver

    // Input data driver
    for (int i = 0; i < jumlahDriver; i++) {
        cout << "Masukkan nama driver " << i + 1 << ": ";
        cin >> data.nama;
        cout << "Masukkan rating driver " << i + 1 << ": ";
        cin >> data.rating;
        p = createNewElm(data);
        insertLast(L, p); // Menambahkan di akhir list
    }

    // Menampilkan semua driver
    cout << "\nDaftar driver:\n";
    displayList(L);

    // Menghapus driver berdasarkan nama
    string namaDriver;
    cout << "Masukkan nama driver yang ingin dihapus: ";
    cin >> namaDriver;
    removeDriver(namaDriver, L);

    // Menampilkan list setelah penghapusan
    cout << "\nDaftar driver setelah penghapusan:\n";
    displayList(L);

    // Menghitung dan menampilkan rata-rata rating driver
    if (!isEmpty(L)) {
        int totalRating = 0;
        int count = 0;
        address temp = first(L);

        while (temp != nil) {
            totalRating += info(temp).rating;
            count++;
            temp = next(temp);
        }

        double rataRata = static_cast<double>(totalRating) / count;
        cout << "\nRata-rata rating driver: " << rataRata << endl;
    } else {
        cout << "List kosong, tidak ada data untuk dihitung rata-ratanya.\n";
    }

    return 0;
}
