// StarPyramid.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{

	int rows, c;
	cout << "Enter number of rows: ";
	cin >> rows;

	c = 2 * rows - 1;
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < c; j++) {
			if (j >= (c / 2) - i && j <= (c / 2) + i) {
				cout << "*";
			}
			else {
				cout << " ";
			}
		}
		cout << endl;
	}
    return 0;
}

