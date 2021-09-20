#include <stdio.h>
#include "bit_ops.h"

// Return the nth bit of x.
// Assume 0 <= n <= 31
unsigned get_bit(unsigned x,
                 unsigned n) {
    return (x >> n) & 1;
}

// Set the nth bit of the value of x to v.
// Assume 0 <= n <= 31, and v is 0 or 1
void set_bit(unsigned * x,
             unsigned n,
             unsigned v) {
	int y=*x;
	y = y >> (n+1);
	y = y << 1;
	y = y | v;
	int i;
	unsigned t;
	for(i=n-1;i>=0;i--) {
		t=get_bit(*x, i);
		y=y<<1;
		y=y|t;
	}
	*x=y;
}

// Flip the nth bit of the value of x.
// Assume 0 <= n <= 31
void flip_bit(unsigned * x,
              unsigned n) {
	int y=*x;
	y = y >> n;
	y = y ^ 1;
	int i;
	unsigned t;
	for(i=n-1;i>=0;i--) {
		t=get_bit(*x, i);
		y=y<<1;
		y=y|t;
	}
	*x=y;
}

