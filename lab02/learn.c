#include <stdio.h>
#include <stdlib.h>

typedef struct node {
	int val;
	struct node *next;
} node;

/*
int *t = (int *)malloc(sizeof(int));

t [x,.] -> [v,x] // x is the address of the variable pointed to
Memory to be : addr[...N-bit-wide...]
malloc(sizeof(int)) : This fixes the N to be 32 bit
This returns the addr value back to be stored in the pointer
The pointer needs to understand what is the type of value that is stored in the pointer
So the typecast

Concept
void function(node *n) {

}

node *n=...
function(n); // the pointer that is passed is by-value. If you change `n` inside the function (the pointer variable, not what it points to), that will NOT be reflected on the outside after returning
However, if you change the address at which n will point to, then those are reflected back since those are changes in the memory

Appreciate this fact when the code in list.c expects a double pointer. That way, you can change the pointer variable itself

*/

int main() {
	node **head = (node **)malloc(sizeof(node *));
	*head = (node *)malloc(sizeof(node));
	(*head)->val = 10; // Note the ()
	(*head)->next = NULL;
	return 0;
}
