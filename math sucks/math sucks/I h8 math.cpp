#include <iostream>
using namespace std;
int main() {
	int number1;
	int number2;
	double answer;
	char letter;
	
	cout << "first number" << endl;
	cin >> number1;
	cout << "second number" << endl;
	cin >> number2;
	cout << "would you like to do: addition, subtraction, divition, mutiply" << endl;
	cin >> letter;
	if (letter == 'a') {
		answer = number1 + number2;
		cout << number1 << " plus " << number2 << " is " << answer << endl;
	}
	else if (letter == 's') {
		answer = number1 - number2;
		cout << number1 << " subtract " << number2 << " is " << answer << endl;
	}
	else if (letter == 'm') {
		answer = number1*number2;
		cout << number1 << " multiply " << number2 << " is " << answer << endl;
	}
	else if (letter = 'd') {
		answer = number1 / number2;
		cout << number1 << " divide " << number2 << " is " << answer << endl;

	}

}