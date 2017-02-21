#include <iostream>
using namespace std;
int main() {
	char cookies;
	cout << " what kind of cookie do you want?" << endl;
	cin >> cookies;
	switch (cookies) {
case'c':
	cout << "you got a choclate chip" << endl;
	break;
case'p':
	cout << "you got a peanut butter" << endl;
	break;
case's':
	cout << "you suck so you get silent bro's cookies" << endl;
	break;
default: 
	cout << "invalid input" << endl;
}
}