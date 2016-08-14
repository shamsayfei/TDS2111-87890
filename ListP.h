#ifndef ListP.h
#define ListP.h

#include <iostream>
#include <string>
using namespace std;

class List{
    
private:
    struct node
    {
        node * next;
    };
        char item;
        int Index;

public:
    void insert(char item, int Index, string subtitle);
    void delete(char item, int Index);
    void remove(int Index);
    void remove(int Index, string subtitle);
    void remove(string subtitle);
    string retrieve(int Index);
    bool find(int Index);
}
#endif
