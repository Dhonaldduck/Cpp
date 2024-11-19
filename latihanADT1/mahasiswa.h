//
//  mahasiswa.h
//  latihanADT1
//
//  Created by Dhona Aribah on 09/10/24.
//

#ifndef mahasiswa_h
#define mahasiswa_h

using namespace std;

struct mahasiswa {
    char nama[10];
    int nilai1, nilai2;
};

void inputMhs(mahasiswa &m);
float rata2(mahasiswa m);



#endif /* mahasiswa_h */
