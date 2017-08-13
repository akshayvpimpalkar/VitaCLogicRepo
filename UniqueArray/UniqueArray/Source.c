/*left shift using selection sort*/
#include <stdio.h>


void main() {
	int i,j,l,k, size, count = 0;
	/*
	i - index of number who is checked with others
	j - indices of those numbers who are compared with ith element in one pass
	k - if we found match in a pass then start from k = j till l - 1 to shift adjascent elements to left
	size - original size of the array
	count - to count number of duplicate values (matches) so that we can avoid that many zeros while printing unique array
	*/
	int arr[] = { 2, 2, 2, 3, 2, 4, 8, 8, 9, 8, 4, 5 };
	l = sizeof(arr) / sizeof(*arr);
	size = l;
	printf("Original array is \n");
	for (i = 0; i < size; i++) {
		printf("%d ", arr[i]);
	}


	for (i = 0; i < l-1; i++) {
		for (j = i + 1; j < l; j++) {
			if (arr[i] == arr[j]) {
				for (k = j; k < l - 1; k++) {
					arr[k] = arr[k + 1];
				}
				arr[k] = 0;
				j--;
				l--;
				count++;
			}
		}
	}

	printf("\n\nUnique array using selection sort is \n");
	for (i = 0; i < size - count; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n\n");
}