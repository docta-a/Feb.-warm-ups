#include <iostream>
using namespace std;
int main() {

	char cookie;

	while (1) {
		cout << "would you like a cookie?" << endl;
		cin >> cookie;
		if (cookie == 'y')
			cout << "cookies!" << endl;
		if (cookie == 'n')
			cout << "okey dokey" << endl;

	}
}