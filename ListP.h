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

    void insert(char item, int Index, string subtitle);
    void delete(char item, int Index);
    void remove(int Index);
    void remove(int Index, string subtitle);
    void remove(string subtitle);
    string retrieve(int Index);
    find(int Index);

#endif
