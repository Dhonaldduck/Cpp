//
//  Header.h
//  TP07STACK
//
//  Created by Dhona Aribah on 25/10/24.
//

#ifndef Header_h
#define Header_h
#define Top(S) (S).Top
#define info(S) (S).info

using namespace std;

typedef char infotype;
struct stack {
    infotype info[15];
    int Top;
};

void createStack_103032330156(stack &S);
bool isEmpty_103032330156(stack S);
bool isFull_103032330156(stack S);
void push_103032330156(stack &S, infotype x);
infotype pop_103032330156(stack &S);
void printInfo_103032330156(stack S);
#endif /* Header_h */
