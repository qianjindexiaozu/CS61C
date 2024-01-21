#include <stddef.h>
#include "ll_cycle.h"

int ll_has_cycle(node *head) {
    /* your code here */
    if(head == NULL) return 0;
    node *tortoies = head;
    node *hare = head;
    while(hare != NULL && hare->next != NULL && hare->next->next != NULL){
        hare = hare->next->next;
        tortoies = tortoies->next;
        if(hare == tortoies) return 1;
    }
    return 0;
}