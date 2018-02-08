#include <iostream>
using namespace std;

int main() {
	int x;
	cout << "How many numbers per line would you like? ";
	cin >> x;
	int foo_number = 0;
	int bar_number = 0;

	for (int i = 1; i < 2000; i++)
	{
		if (i % 50== 0) {
			cout << "FOO" << endl;
			foo_number++;
		}
		if(i % 33 == 0){
			cout << "BAR" << endl;
			bar_number++;
		}
		else {

			cout << i << endl;
		}
	}
	cout << "total FOO is " << foo_number << endl;
	cout << "total BAR is " << bar_number << endl;
	return 0;
}