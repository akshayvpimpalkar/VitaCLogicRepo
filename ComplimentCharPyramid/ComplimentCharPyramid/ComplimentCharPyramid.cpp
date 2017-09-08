// ComplimentCharPyramid.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{

	int rows, cols;
	cout << "Enter number of rows: ";
	cin >> rows;

	cols = 2 * rows - 1;

	char c; // to print on each row
	for (int i = 0; i < rows; i++) {
		c = 'A'; // its starts with 'A' on each row
		for (int j = 0; j < cols; j++) {
			if (j <= (rows - 1 - i) || j >= (rows - 1 + i)) {
				cout << c;
				j < (rows - 1) ? c++ : c--;
			}
			else {
				cout << " ";
				//we want to decrement c only once so th following condition will be applied
				if (j == rows - 1) {
					c--;
				}
			}
		}
		cout << endl;
	}
	
    return 0;
}

