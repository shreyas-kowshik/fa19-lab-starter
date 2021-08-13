#include <stddef.h>
#include "ll_cycle.h"

int ll_has_cycle(node *head) {
    /* your code here */
	if(head == NULL) return 0;

    node *t,*h;
    t = head;
    h = head;
    while(1) {
		h=h->next;
		if(h) {
			h=h->next;
			if(h == NULL) return 0;
			t=t->next;
			if(t==h) return 1;
		}
		else {
			return 0;
		}
	}

    return 0;
}
