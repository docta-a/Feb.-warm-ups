#include <iostream>
using namespace std;
int main() {
	double width;
	double height;
	double sum;

	cout << "what the width of the cone?" << endl;
	cin >> width;
	cout << "What's the heights of the cone" << endl;
	cin >> height;

	sum = (width *height)/3;
	cout << "The volume of the cone is." << sum << endl;

}