#include "ListP.h"

void insert(char item, int Index, string subtitle){
    struct Node* newPtr = new Node();
    if(Index == 1){
        newPtr->next = head;
        head = newPtr;
        return;
    }
    Node* newPtr2 = head;
    for(int i=0; i<Index-2; i++){
        newPtr2 = newPtr2->next;
    }
newPtr->next = newPtr2->next;
newPtr2->next = newPtr;
}

void delete(char item, int Index){
    struct Node* newPtr = head;
    if(Index == 1){
        head = newPtr->next;
        delete newPtr;
        return;
    }
    int i;
    for(i = 0; i < Index-2; i++)
        newPtr = newPtr->next; //newPtr pointing to (Index-1)th node
    
    struct Node* newPtr2 = newPtr->next; //nth node
    newPtr->next = newPtr2->next;
    delete newPtr2;
}

void remove(int Index){
    Node * prev;
    if(Index<1){
        return;
    }
    else if(Index == 1){
        cur = head;
        head = head->next;
    }
    else{
        Node * prev = Index-1;
        cur = prev->next;
        prev->next = cur->next;
    }
    cur->next = NULL;
    delete cur;
}
