#ifndef ListP.h
#define ListP.h

#include <iostream>
#include <string>
using namespace std;

struct node
{
    char item;
    node * next;
    int Index;
};

void insertFirst(char item, int Index);
void insertMiddle(char item, int Index);
void insertLast(char item, int Index);
void delete(char item, int Index);


#endif
