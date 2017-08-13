/*Accept num and find that many prime numbers after the number*/

#include <iostream>

using namespace std;

int main()
{
	int num, i, tempNum, flag = 0, count = 0;
	cout << "Enter number" << endl;
	cin >> num;
	tempNum = num + 1;
	/*count-to count prime nums*/
	while (count < num) {

		for (i = 2; i <= tempNum / 2; i++) {
			if (tempNum%i == 0) {
				flag = 1;
				break;
			}
		}
		if (flag == 0) {
			count++;
			cout << tempNum << " ";
		}
		flag = 0; //to reset flag after determining a prime num
		tempNum++;
	}
	cout << endl;
	return 0;
}
