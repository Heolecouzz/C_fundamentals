/* This module aims to create and manipulate linked list
*/

// Create a new linked list
void create_ll(LinkedList list);

// Suppress a linked list
void suppress_ll(LinkedList list);

// Indicates whether the linked list is empty or not
int is_empty(LinkedList list);

// Add elements to the linked list
void add_element(LinkedList list, void* element);

// Suppress the element given
void suppress_element(LinkedList list, void* element);

// Gives the last element of the linked list
void* top_element(LinkedList list);

// Display the linked list
void display_ll(LinkedList list);


struct LinkedList {
    void* element;
    LinkedList* following;
};