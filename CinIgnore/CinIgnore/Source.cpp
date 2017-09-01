// istream::ignore example
#include <iostream>     // std::cin, std::cout
using namespace std;

int main() {
	char first, last, f1, l1;

	std::cout << "Please, enter your first name followed by your surname: ";

	first = std::cin.get();     // get one character
	std::cin.ignore(256, ' ');   // ignore until space

	last = std::cin.get();      // get one character

	cin.ignore(256, '\n');
	std::cout << "Your initials are " << first << last << '\n';


	cout << "This is second name: " << endl;
	f1 = cin.get();
	cin.ignore(256, ' ');
	l1 = cin.get();

	std::cout << "Your initials are " << f1 << l1 << '\n';
	return 0;
}