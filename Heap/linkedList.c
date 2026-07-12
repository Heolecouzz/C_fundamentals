#include <stdio.h>
#include <linkedList.h>


LinkedList* create_ll(LinkedList* list) {
    list = NULL;

    return list;
}


void suppress_ll(LinkedList* list) {

    LinkedList* next;
    LinkedList* actual = list;
    
    while (actual != NULL) {
        next = actual->following;
        free(actual);
        actual = next;
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

    if (list == NULL) {
        printf("The list is empty");
        goto error;
    }

    while (actual != NULL) {
        former = actual;
        actual = actual->following;
    }

    actual = malloc(sizeof(LinkedList));
    actual->element = element;

    return actual;

error:
    return EXIT_FAILURE;
}


LinkedList* suppress_element(LinkedList* list, void* element) {

    LinkedList* actual = list;
    LinkedList* former;
    LinkedList* next;

    if (list == NULL) {
        printf("The list is empty");
        goto error;
    }

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
            break;
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

error:

    return EXIT_FAILURE;
}


void* top_element(LinkedList* list) {

    LinkedList* actual = list;

    if (list == NULL) {
        printf("The list is empty");
        goto error;
    }

    LinkedList* next = actual->following;

    while (next != NULL) {
        next = next->following;
        actual = actual->following;
    }

    return actual->element;

error:

    return EXIT_FAILURE; 
}


void display_ll(void* display_element(LinkedList* list)) {


}