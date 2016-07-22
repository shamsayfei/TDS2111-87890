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

void delete(char item, int Index)
{
    struct Node* temp1 = head;
    if(n ==1){
        head = temp1->next;
        free(temp1);
        return;
    }
    int i;
    for(i = 0; i < n-2; i++)
        temp1 = temp1->next;
    
    struct Node* temp2 = temp1->next;
    temp1->next = temp2->next;
    free(temp2);
}
