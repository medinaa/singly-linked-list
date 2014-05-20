#include <stdio.h>
#include <stdlib.h>
#include "linkedlist.h"

//unique node id, a static variable is initialized once.  
static int process_id = 0;
Node* n_make()
{
    Node* n = (Node*) calloc(1, sizeof(Node));
    n->pid = ++process_id;
    return n;
}

LinkedList* ll_make()
{
    LinkedList* l = (LinkedList*) calloc(1, sizeof(LinkedList));
    return l;
}

void ll_add(LinkedList* list)
{
    if (list->head == NULL)
    {
        Node* nu = n_make();
        list->head = nu;
        list->end = nu;
    }
    else
    {
        Node* nu = n_make();
        Node* t = list->head;
        while (t->next != NULL)
        {
            t = t->next;
        }
        t->next = nu;
        list->end = nu;
    }
}

//TODO:add a remove() function

void ll_free(LinkedList* list)
{
    //start freeing from the end of the list 
    Node* curr = list->head;
    Node* next = NULL;
    while(curr->next != NULL)
    {
        next = curr->next;
        free(curr);
        curr = next;
    }
    free(curr);
    free(list);
}
