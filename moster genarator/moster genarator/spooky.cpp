#include <iostream>
#include <ctime>
#include <>
using namespace std;


	void spooky();
int main() {

	srand(time(NULL));
	while (true) {
		spooky();
		system ("pause");
	}
}
void spooky() {
	int num = rand() % 6
		switch (num){
		case 0:
			cout << "You got Levy in the morning!" << endl;
			break;
		case 1:
			cout << "You got Silent bro without a hair cut!" << endl;
			break;
		case 2:
			cout << "You got Levy with a haircut!" << endl;
			break;
		case 3:
			cout << "You got Chutulu!" << endl;
			break;
		case 4:
			cout << "You got Mewtwo!" << endl;
			break;
		case 5:
			cout << "You got yourself!" << endl;
			break;

		}
}