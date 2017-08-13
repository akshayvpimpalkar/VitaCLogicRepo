#include <stdio.h>

void main() {
	int r, rev = 0, original = 414;
	int num = original;
	printf("original num is %d\n", original);

	while (num > 0) {
		r = num % 10;
		rev = rev * 10 + r;
		num = num / 10;
	}
	if (rev == original) {
		printf("The number is palindrome\n\n");
	}
	else {
		printf("The number is not palindrome\n\n");
	}
}