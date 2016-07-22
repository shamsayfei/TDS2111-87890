#include "ListP.h"

void insert(char item, int Index){
    struct Node* temp1 = new Node();
    if(n == 1){
        temp1->next = head;
        head = temp1;
        return;
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
