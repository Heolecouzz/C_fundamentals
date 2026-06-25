#include <stdio.h>
#include <linkedList.h>


void create_ll(LinkedList* list) {
    list = NULL;
}


void suppress_ll(LinkedList* list) {

    LinkedList* next;
    
    while (list != NULL) {
        next = list->following;
        free(list);
    }
}


int is_empty(LinkedList* list) {
    if (list == NULL) {
        return 1;
    }
    return 0;
}


LinkedList* add_element(LinkedList* list, void* element) {

    LinkedList* actual = list;
    LinkedList* former;

    while (actual != NULL) {
        former = actual;
        actual = actual->following;
    }

    former->following = malloc(element * sizeof(void*));
    list->element = element;

    return list;
}


LinkedList* suppress_element(LinkedList* list, void* element) {

    LinkedList* actual = list;
    LinkedList* former;
    LinkedList* next;

    // Treat if the element to suppress is the first one
    if (actual != NULL) {
        if (actual->element == element) {
            actual = actual->following;
            free(list);
            return actual;
        } else {
            former = actual;
            actual = actual->following;
            next = actual->following;
        }
    }

    // Treat if the element is inside the linked list
    while (actual != NULL && next != NULL) {
        if (actual->element == element) {
            free(actual);
            former->following = next;
        } else {
            former = actual;
            actual = actual->following;
            next = actual->following;
        }
    }

    // Treat if the element is the last one 
    if (actual != NULL && next == NULL) {
        if (actual->element == element) {
            former->following = NULL;
        } else {
            printf("The element isn't in the list");
        }
    }

    return list;
}


void* top_element(LinkedList* list) {

    LinkedList* actual = list;
    LinkedList* next = actual->following;

    while (next != NULL) {
        next = next->following;
        actual = actual->following;
    }

    return actual->element;
}


void display_ll(LinkedList* list) {


}