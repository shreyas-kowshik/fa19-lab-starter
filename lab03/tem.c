#include <stdio.h>
#include <stdlib.h>


void set_bit(unsigned * x,
             unsigned n,
             unsigned v) {
	int y=*x;
	printf("%d\n", y);
	y = y >> n;
	printf("%d\n", y);
	y = y | v;
	printf("%d\n", y);
	printf("v : %d\n", v);
	y = y << n;
	printf("%d\n", y);
	*x = y | ((*x) >> n);
	printf("*x : %d\n", *x);
}

int main(int argc, char *argv[]) {
	unsigned int x=atoi(argv[1]);
	unsigned int n=atoi(argv[2]);
	unsigned int v=1;
	set_bit(&x, n, v);
	return 0;
}
