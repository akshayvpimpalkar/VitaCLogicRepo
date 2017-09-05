#include<iostream>
using namespace std;


void bubbleSort(int a[], int n) {
	cout << "Array before bubble sort: " << endl;
	for (int i = 0; i < n; i++) {
		cout << a[i] << " ";
	}
	cout << endl;
	int flag;
	//to loop through 9 passes for size of 10
	for (int i = 0; i < n - 1; i++) {
		flag = 0;

		//to check for adjacent elements
		for (int j = 0; j < n - i - 1; j++) {
			if (a[j] > a[j + 1]) {
				int temp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = temp;
				flag = 1;
			}
		}
		if (flag == 0) {
			break;
		}
	}

	cout << "Array after bubble sort: " << endl;
	for (int i = 0; i < n; i++) {
		cout << a[i] << " ";
	}
	cout << endl;
}

void selectionSort(int b[], int n) {

	cout << "Array before selection sort: " << endl;
	for (int i = 0; i < n; i++) {
		cout << b[i] << " ";
	}
	cout << endl;
	int flag;
	for (int i = 0; i < n - 1; i++) {
		flag = 0;
		for (int j = i + 1; j < n; j++) {
			if (b[i] > b[j]) {
				int temp = b[i];
				b[i] = b[j];
				b[j] = temp;
				flag = 1;
			}
		}
	}

	cout << "Array after selection sort: " << endl;
	for (int i = 0; i < n; i++) {
		cout << b[i] << " ";
	}
	cout << endl;
}
int main() {
	int arr[10] = { 1,26,74,53,2,35,13,25,68,24 };
	int arr1[5] = { 87, 3, 45, 17, 8 };

	bubbleSort(arr, 10);
	cout << endl;
	selectionSort(arr1, 5);

	return 0;
}
