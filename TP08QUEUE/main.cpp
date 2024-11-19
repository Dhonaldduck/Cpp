//
//  main.cpp
//  TP08QUEUE
//
//  Created by Dhona Aribah on 08/11/24.
//

#include <iostream>
#include "Header.h"

using namespace std;

int main(){
    Queue Q;
    createQueue_103032330156(Q);
    
    elemQ *P1 = createElemQueue_103032330156("John Doe", 65, "lansia", 1);
    elemQ *P2 = createElemQueue_103032330156("Alice", 30, "tenaga_kesehatan", 2);
    elemQ *P3 = createElemQueue_103032330156("Bob", 25, "pekerja", 3);
    elemQ *P4 = createElemQueue_103032330156("Charlie", 70, "pensiunan", 4);
    elemQ *P5 = createElemQueue_103032330156("David", 28, "pekerja", 5);
    
    enqueue_103032330156(Q, P1);
    enqueue_103032330156(Q, P2);
    enqueue_103032330156(Q, P3);
    enqueue_103032330156(Q, P4);
    enqueue_103032330156(Q, P5);
    
    cout << "isi antrean awal" << endl;
    printInfo_103032330156(Q);
    
    cout << "\nMelakukan pelayanan pada antrean: " << endl;
    serveQueue_103032330156(Q);
    
    cout << "\nIsi antrean setelah pelayanan:" << endl;
    printInfo_103032330156(Q);

    elemQ* P6 = createElemQueue_103032330156("Edward", 22, "pekerja", 6);
    enqueue_103032330156(Q, P6);

    cout << "\nMengatur ulang antrean berdasarkan prioritas:" << endl;
    reassignQueue_103032330156(Q);
    printInfo_103032330156(Q);

    cout << "\nMemeriksa waktu tunggu dan mengubah prioritas jika lebih dari 2 jam:" << endl;
    checkWaitingTime_103032330156(Q, 130);
    printInfo_103032330156(Q);

    cout << "\nMenangani kondisi darurat untuk warga dengan nomor antrean 5:" << endl;
    emergencyHandle_103032330156(Q, 5);
    printInfo_103032330156(Q);

    cout << "\nMengupdate prioritas antrean setiap jam:" << endl;
    updatePriority_103032330156(Q);
    printInfo_103032330156(Q);

    cout << "\nMenghapus warga dengan nomor antrean 3:" << endl;
    elemQ* removedElem = findAndRemove_103032330156(Q, 3);

    if (removedElem != NULL) {
        cout << "Warga yang dihapus: " << info(removedElem).nama << endl;
    }else{
        cout << "Warga dengan nomor antrean 3 tidak ditemukan"<< endl;
    }
    printInfo_103032330156(Q);
    cout << "\nUkuran antrean saat ini: " << size_103032330156(Q) << endl;
    return 0;
}
