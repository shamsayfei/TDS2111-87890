#ifndef ListP.h
#define ListP.h

#include <iostream>
#include <string>
using namespace std;

struct node
{
    char item;
    node * next;
    int index;
};

void insertFirst(char item, int index);
void insertMiddle(char item, int index);
void insertLast(char item, int index);
void delete(char item, int index);


#endif
