//
//  queue.cpp
//  TP08QUEUE
//
//  Created by Dhona Aribah on 08/11/24.
//

#include <iostream>
#include "Header.h"

using namespace std;

void createQueue_103032330156(Queue &Q){
    head(Q) = NULL;
    tail(Q) = NULL;
}

bool isEmpty_103032330156(Queue Q){
    return head(Q) == NULL;
}

elemQ* createElemQueue_103032330156(string nama, int usia, string pekerjaan, int nomor_antrean){
    elemQ *P = new elemQ;
    info(P).nama = nama;
    info(P).usia = usia;
    info(P).pekerjaan = pekerjaan;
    info(P).prioritas = (usia >= 60 || pekerjaan == "tenaga_kesehatan");
    info(P).nomor_antrean = nomor_antrean;
    info(P).kondisi_darurat = false;
    next(P) = NULL;
    return P;
}

void enqueue_103032330156(Queue &Q, elemQ *P){
    if (isEmpty_103032330156(Q)){
        head(Q) = P;
        tail(Q) = P;
    } else if (info(P).prioritas){
        if (!info(head(Q)).prioritas){
            next(P) = head(Q);
            head(Q) = P;
        }else{
            elemQ *temp = head(Q);
            while(next(temp) != NULL && info(next(temp)).prioritas){
                temp = next(temp);
            }
            next(P) = next(temp);
            next(temp) = P;
            if (next(P) == NULL){
                tail(Q) = P;
            }
        }
    } else {
        next(tail(Q)) = P;
        tail(Q) = P;
    }
}

void dequeue_103032330156(Queue &Q, elemQ *&P){
    if(isEmpty_103032330156(Q)){
        P = NULL;
        cout << "semua warga telah dilayani" << endl;
    } else {
        P = head(Q);
        head(Q) = next(head(Q));
        if (head(Q) == NULL){
            tail(Q) = NULL;
        }
        next(P) = NULL;
    }
}
       
elemQ* front_103032330156(Queue Q){
    return head(Q);
}

elemQ* back_103032330156(Queue Q){
    return tail(Q);
}

int size_103032330156(Queue Q){
    int count = 0;
    elemQ *temp = head(Q);
    while(temp != NULL){
        count++;
        temp = next(temp);
    }
    return count;
}

void printInfo_103032330156(Queue Q){
    elemQ *P = Q.head;
       while (P!=NULL){
           cout << endl << "------------------------------" << endl;
           cout << "Nama: " << P->info.nama << endl;
           cout << "Usia: " << P->info.usia << endl;
           cout << "Pekerjaan: " << P->info.pekerjaan << endl;
           if (P->info.prioritas){
               cout << "Prioritas: Ya" << endl;
           }else{
               cout << "Prioritas: Tidak" << endl;
           }
           cout << "Nomor Antrean: " << P->info.nomor_antrean << endl;
           cout << "------------------------------" << endl;
           P = next(P);
       }
}

void serveQueue_103032330156(Queue &Q){
    if (isEmpty_103032330156(Q)){
     }else{
         int kuota = 100;
         elemQ *P;
         cout << endl << "Melakukan pelayanan pada antrean:" << endl;
         while (!isEmpty_103032330156(Q) && kuota != 0){
             dequeue_103032330156(Q,P);
             cout << "Warga yang dilayani:" << endl;
             cout << "------------------------------" << endl;
             cout << "Nama: " << info(P).nama << endl;
             cout << "Usia: " << info(P).usia << endl;
             cout << "Pekerjaan: " << info(P).pekerjaan << endl;
             if (info(P).prioritas){
                 cout << "Prioritas: Ya" << endl;
             }else{
                 cout << "Prioritas: Tidak" << endl;
             }
             cout << "Vaksinasi berhasil." << endl;
             cout << "------------------------------" << endl;
             kuota--;
         }
         if (kuota == 0){
             cout << endl << "---------------KAPASITAS TELAH PENUH---------------" << endl;
         }
         if (!isEmpty_103032330156(Q)){
             cout << endl << "---------------SILAKAN DATANG KEMBALI BESOK---------------" << endl;
         }
     }
}

void reassignQueue_103032330156(Queue &Q){
    Queue S;
    createQueue_103032330156(S);
    int P = size_103032330156(Q);
    elemQ *R;
    while (P != 0 || !isEmpty_103032330156(Q)){
        dequeue_103032330156(Q,R);
        enqueue_103032330156(S,R);
        P--;
    }
    Q = S;
}

void checkWaitingTime_103032330156(Queue &Q, int waktu_sekarang){
    elemQ *P = head(Q);
    if (waktu_sekarang > 120){
        P = Q.head;
        while (P != NULL){
            info(P).prioritas = true;
            P = next(P);
        }
    }
    reassignQueue_103032330156(Q);
}
void emergencyHandle_103032330156(Queue &Q, int nomor_antrean){
    elemQ *P = head(Q);
        while (P != NULL){
            if (info(P).nomor_antrean == nomor_antrean){
                info(P).kondisi_darurat = true;
                info(P).prioritas = true;
                reassignQueue_103032330156(Q);
                return;
            }
            P = next(P);
        }
        cout << endl << "---------------NOMOR ANTREAN TIDAK DITEMUKAN---------------" << endl;
}

void updatePriority_103032330156(Queue &Q){
    elemQ *P = Q.head;
    elemQ *R;
    checkWaitingTime_103032330156(Q, 130);
    while (P != NULL){
        if (info(P).kondisi_darurat){
            reassignQueue_103032330156(Q);
        }
        P = next(P);
    }
}

elemQ* findAndRemove_103032330156(Queue &Q, int nomor_antrean){
    elemQ *P, *S, *R;
    P = head(Q);
    S = head(Q);
    while (next(P) != NULL){
        if (nomor_antrean == info(P).nomor_antrean){
            if (P == head(Q)){
                dequeue_103032330156(Q,R);
                return R;
            }else if (P == tail(Q)){
                tail(Q) = S;
                next(tail(Q)) = NULL;
                return P;
            }else{
                next(S) = next(P);
                next(P) = NULL;
                return P;
            }
        }
        S = P;
        P = next(P);
    }
    return NULL;
}
