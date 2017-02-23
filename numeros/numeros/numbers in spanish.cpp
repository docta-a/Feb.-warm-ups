#include <iostream>
using namespace std;
int main() {
	double radius;
	double height;
	double sum;

	cout << "what the radius?" << endl;
	cin >> radius;
	cout << "What's the height?" << endl;
	cin >> height;

	sum = 3.14*(radius*radius)*height / 3;
	cout << "the area is" << sum << endl;

}
