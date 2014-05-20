/* LinkedList.h - 
 * this code represents a basic linked list with
 * integers for data
 */

typedef struct node Node;
struct node {
    Node* next;
    int pid;
};


typedef struct linkedlist LinkedList;
struct linkedlist {
    Node* head;
    Node* end;
};

//creates a node
Node* n_make();

//creates a linked list
LinkedList* ll_make();

//adds node to tail of linked list
void ll_add(LinkedList* list);

//free the allocated memory for the linkedlist 
void ll_free(LinkedList* list);

//given a node returns next following node 
//Node* next(Node* current);
