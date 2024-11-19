//
//  program.cpp
//  TP07STACK
//
//  Created by Dhona Aribah on 25/10/24.
//
#include <iostream>
#include <stdio.h>
#include "Header.h"

using namespace std;

void createStack_103032330156(stack &S){
    Top(S) = 0;
}

bool isEmpty_103032330156(stack S){
    if (Top(S) == 0){
        return 1;
    } else {
        return 0;
    }
}

bool isFull_103032330156(stack S){
    if (Top(S) == 15){
        return 1;
    } else {
        return 0;
    }
}

void push_103032330156(stack &S, infotype x){
    if (isFull_103032330156(S)){
        cout << "stack penuh" << endl;
    } else {
        Top(S) = Top(S) + 1;
        info(S)[Top(S)] = x;
    }
}

infotype pop_103032330156(stack &S){
    infotype x = info(S)[Top(S)];
    Top(S) = Top(S) - 1;
    return x;
}

void printInfo_103032330156(stack S){
    if (isEmpty_103032330156(S) == false){
        for (int i = Top(S); i >= 1; i--) {
            cout << info(S)[i] << " ";
        }
    } else {
        cout << "Stack kosong" << endl;
    }
}

