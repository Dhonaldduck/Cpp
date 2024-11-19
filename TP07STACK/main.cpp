//
//  main.cpp
//  TP07STACK
//
//  Created by Dhona Aribah on 25/10/24.
//

#include <iostream>
#include "Header.h"
using namespace std;

int main() {
    stack S;
    infotype data;
    int x = 0;
    createStack_103032330156(S);
    cout << "masukkan jumlah elemen: " << endl;
    cin >> x;
    for (int i = 0; i < x; i++){
        cin >> data;
        push_103032330156(S, data);
    }
    printInfo_103032330156(S);
    cout << endl;
    for (int j = 4; j < x; j++){
        data = pop_103032330156(S);
    }
    printInfo_103032330156(S);
    cout << endl;
}
