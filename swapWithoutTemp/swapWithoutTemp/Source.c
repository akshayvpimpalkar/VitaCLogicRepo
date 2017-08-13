#include <stdio.h>


void main() {
	/*with XOR operator
	 * it means their binaries are compared with XOR logic
	   i.e  if both are 1s or 0s then ans is 0 otherwise 1*/
	printf("XOR swapping:\n");
	int a, b;
	a = 2;
	b = 3;
	printf("Before swapping: a = %d and b = %d\n", a, b);

	a = a^b;
	b = a^b;
	a = a^b;

	printf("After swapping: a = %d and b = %d\n\n", a, b);

	/*Arithmetic swapping*/
	printf("Arithmetic swapping:\n");
	int c = 4, d = 5;

	printf("Before swapping: c = %d and d = %d\n", c, d);

	c = c + d;
	d = c - d;
	c = c - d;

	printf("After swapping: c = %d and d = %d\n\n", c, d);

	

}