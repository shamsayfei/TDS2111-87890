#include "ListP.h"

void insertFirst(char item, int Index){
    Nodeindex *newitem = newNodeindex;
    newitem->Index = 2;
    newitem->next = head;
    head = newitem;
}

void insertMiddle(char item, int Index){
    Nodeindex *newitem = newNodeindex;
    newitem->Index = 2;
    newitem->next = cur->next; //next address of node newitem will be pointing to the same address where cur is pointing to.
    cur->next = newitem; 
}

void insertLast(char item, int Index){
    Nodeindex *newitem = newNodeindex;
    newitem->Index = 2;
    cur->next = newitem;
    newitem->next = NULL;
}
