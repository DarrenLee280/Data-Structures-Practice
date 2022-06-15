#include <iostream>

//node struct
struct Node{
    int data;
    struct Node *next;
};

/**
 * Creates a new Node for the linked list.
 * 
 * @param data The data that the node will contain.
 * @return Node* returns the newly created node with the data inserted and the next node pointed to nullptr.
 */
Node* newNode(int data){
    Node* new_node = new Node();
    new_node->data = data;
    new_node->next = nullptr;
    return new_node;
}

/**
 * Inserts the newly created node and puts it in increasing order.
 * 
 * @param head_ref The start of the sorted linked list.
 * @param new_node The node that needs to be inserted into the list.
 */
void insert_sorted(Node** head_ref, Node* new_node){
    Node * current;

    //check if the head node is the end
    if(*head_ref==nullptr || (*head_ref)->data >= new_node->data){
        new_node->next = *head_ref;
        *head_ref = new_node;
    }
    else {
        //check where to insert the node.
        current = *head_ref;                                    
        while(current->next != nullptr && current->next->data < new_node->data){
            //move current reference to the next pointer.
            current = current->next;
        }

        //make the new connections.
        new_node->next = current->next;
        current->next = new_node;
    }
}

/**
 * Utility function that prints the entirety of the sorted linked list.
 * 
 * Format: head->data->...->
 * 
 * @param head This is the starting node of the linked list
 */
void print_list(Node* head){
    Node* current = head;
    std::cout<<"head->";
    while(current != nullptr){
        std::cout << current->data << "->";
        current = current->next;
    }
    std::cout << std::endl;
}

/**
 * The Driver program
 * 
 * @return int 
 */
int main(){
    Node *head = nullptr;
    Node* new_node = newNode(5);
    insert_sorted(&head, new_node);
    print_list(head);

    new_node = newNode(10);
    insert_sorted(&head, new_node);
    print_list(head);

    new_node = newNode(7);
    insert_sorted(&head, new_node);
    print_list(head);

    new_node = newNode(3);
    insert_sorted(&head, new_node);
    print_list(head);

    new_node = newNode(1);
    insert_sorted(&head, new_node);
    print_list(head);

    new_node = newNode(9);
    insert_sorted(&head, new_node);
    print_list(head);

    return 0;
}
