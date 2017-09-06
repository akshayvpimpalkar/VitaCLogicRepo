
#include"stdafx.h"
#include<iostream>
using namespace std;

int fact(int n) {
	if (n == 0 || n == 1) {
		return 1;
	}

	return n*fact(n - 1);
}

int nCr(int n, int r) {
	return fact(n) / (fact(r)* fact(n - r));
}

int main()
{
	int rows;
	cout << "Enter number of rows: ";
	cin >> rows;

	int i, j, s;

	for (i = 0; i < rows; i++) {
		for (s = i; s < rows - 1; s++) {
			cout << " ";
		}

		for (j = 0; j <= i; j++) {
			cout << nCr(i, j) << " ";
		}

		cout << endl;
	}


    return 0;
}

