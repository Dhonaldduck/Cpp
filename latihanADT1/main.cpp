//
//  main.cpp
//  latihanADT1
//
//  Created by Dhona Aribah on 09/10/24.
//

#include <iostream>
#include "mahasiswa.cpp"

using namespace std;

int main(){
    mahasiswa mhs;
    inputMhs(mhs);
    cout << "rata-rata nilai mahasiswa " << "adalah " << rata2(mhs) << endl;
    
}
