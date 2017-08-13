#include <stdio.h>
#include <string.h>

void check(char word[]) {
	int i, l = strlen(word), flag = 0;
	for (i = 0; i < l / 2; i++) {
		if (word[i] != word[l - 1 - i]) {
			flag = 1;
			break;
		}
	}
	if (flag == 0) {
		printf("%s ", word);
	}
}

void main() {
	int i, k=0, l;
	char str[100], word[50];
	printf("Enter sentence: ");
	scanf("%[^\n]", str);

	l = strlen(str);
	for (i = 0; i <= l; i++) {
		if (str[i] != ' ' && str[i] != '\0') {
			word[k++] = str[i];
		}
		else {
			word[k] = '\0';
			check(word);
			k = 0;
		}
	}
	printf("\n");
}