//
//  mahasiswa.cpp
//  latihanADT1
//
//  Created by Dhona Aribah on 09/10/24.
//
#include <iostream>
#include "mahasiswa.h"

using namespace std;

void inputMhs(mahasiswa &m){
    cout << "input nama mahasiswa: " << endl;
    cin >> (m).nama;
    cout << "input nilai 1: " << endl;
    cin >> (m).nilai1;
    cout << "input nilai 2: " << endl;
    cin >> (m).nilai2;
    
}

float rata2(mahasiswa m){
    return (m.nilai1 + m.nilai2) / 2;
}
