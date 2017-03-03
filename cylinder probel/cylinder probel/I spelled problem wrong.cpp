#include <iostream>
using namespace std;
int main() {
	double Radius;
	double height;
	double sum;

	cout << "what the Radius of the cylinder?" << endl;
	cin >> Radius;
	cout << "What's the heights of the cone" << endl;
	cin >> height;

	sum = (Radius *height);
	cout << "The volume of the cylinder is." << sum << endl;

}