#include <iostream>
using namespace std;

int main() {
	int x;
	cout << "How many numbers per line would you like? ";
	cin >> x;

	for (int i = 1; i < 2000; i++)
	{
		if (i % 50== 0) {
			cout << "FOO" << endl;
		}
		if(i % 33 == 0){
			cout << "BAR" << endl;
		
		}
		else {

			cout << i << endl;
		}
	}

	return 0;
}