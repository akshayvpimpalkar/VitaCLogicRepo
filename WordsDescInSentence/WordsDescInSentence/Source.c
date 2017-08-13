#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void sort(char t[20][20], int c) {
	char temp[20];
	int i, j, flag = 0;

	/*using bubble sort to sort words in 2d array*/
	for (i = 0; i< c - 1; i++) {
		for (j = 0; j< c - i - 1; j++) {
			if (strlen(t[j]) < strlen(t[j + 1])) {
				strcpy(temp, t[j]);
				strcpy(t[j], t[j + 1]);
				strcpy(t[j + 1], temp);
				flag = 1;
			}
		}
		if (flag == 0) {
			break;
		}
	}

	for (i = 0; i< c; i++) {
		printf("%s\n", t[i]);
	}
}
int main()
{
	char str[100];
	printf("Enter Sentence: ");
	scanf("%[^\n]", str);

	char t[20][20], word[50];
	int i, k = 0, j = 0, c = 0, l = strlen(str);

	/*to extract words from a sentence*/
	for (i = 0; i <= l; i++) { // take limit till \0 of the sentence
		if (str[i] != ' ' && str[i] != '\0') {
			word[k++] = str[i];
		}
		else {
			c++;
			word[k] = '\0';
			strcpy(t[j++], word);
			k = 0;
		}
	}
	sort(t, c);
	return 0;
}
