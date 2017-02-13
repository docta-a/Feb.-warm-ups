#include <iostream>
using namespace std;

int main() {
	char princess;

	cout << "Which is your favorite color?" << endl;

	cout << "a= Red" << endl;

	cout << "b= Blue" << endl;

	cout << "c= Light green" << endl;

	cout << "d= pink" << endl;

	cin >> princess;
	if (princess == 'a')
		cout << "You are Mulan" << endl;
	else if (princess == 'b')
		cout << "You are Cinderella" << endl;
	else if (princess == 'c')
		cout << "You are the Little Mermaid" << endl;
	else if (princess == 'd')
		cout << "You are Aurora" << endl;








}