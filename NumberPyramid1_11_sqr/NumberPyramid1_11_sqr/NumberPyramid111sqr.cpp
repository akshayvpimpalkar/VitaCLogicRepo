// NumberPyramid111sqr.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	int rows, c;
	cout << "Enter number of rows: ";
	cin >> rows;

	c = (2 * rows) - 1;

	int k; // to print a variable e.g. 1,2,3,2,1
	for (int i = 0; i < rows; i++) {
		k = 1; // it starts with 1 on each row
		for (int j = 0; j < c; j++) {
			if (j >= (rows - 1 - i) && j <= (rows - 1 + i)) {
				cout << k;
				j < (rows - 1) ? k++ : k--; // it will increment k till middle and then decrement
			}
			else {
				cout << " ";
			}
		}
		cout << endl;
	}

	cout << "------------------------------------" << endl;

    return 0;
}

