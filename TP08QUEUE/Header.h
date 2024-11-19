//
//  Header.h
//  TP08QUEUE
//
//  Created by Dhona Aribah on 08/11/24.
//
#include <iostream>
#ifndef Header_h
#define Header_h
#define info(P) (P)->info
#define next(P) (P)->next
#define head(Q) ((Q).head)
#define tail(Q) ((Q).tail)

using namespace std;

struct Infotype {
    string nama;
    int usia;
    string pekerjaan;
    bool prioritas;
    int nomor_antrean;
    bool kondisi_darurat;
};

struct elemQ {
    Infotype info;
    elemQ *next;
};

struct Queue {
    elemQ *head;
    elemQ *tail;
};

void createQueue_103032330156(Queue &Q);
bool isEmpty_103032330156(Queue Q);
elemQ* createElemQueue_103032330156(string nama, int usia, string pekerjaan, int nomor_antrean);
void enqueue_103032330156(Queue &Q, elemQ *P);
void dequeue_103032330156(Queue &Q, elemQ *&P);
elemQ* front_103032330156(Queue Q);
elemQ* back_103032330156(Queue Q);
int size_103032330156(Queue Q);
void printInfo_103032330156(Queue Q);
void serveQueue_103032330156(Queue &Q);
void reassignQueue_103032330156(Queue &Q);
void checkWaitingTime_103032330156(Queue &Q, int waktu_sekarang);
void emergencyHandle_103032330156(Queue &Q, int nomor_antrean);
void updatePriority_103032330156(Queue &Q);
elemQ* findAndRemove_103032330156(Queue &Q, int nomor_antrean);

#endif /* Header_h */
