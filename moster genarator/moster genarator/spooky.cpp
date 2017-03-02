#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

//declation
	void spooky();
int main() {

	srand(time(NULL));
	while (true) {
		spooky();//function call
		system("color 4D");
		system ("pause");
		
	}
}
/////////defintions
void spooky() {
	int num = rand() % 6;
		switch (num){
		case 0:
			cout << "You got Jaime with her Gucci Choclates!" << endl;
			break;
		case 1:
			cout << "You got Silent bro in the morning!" << endl;
			break;
		case 2:
			cout << "You got Levy with a haircut! Legend says if you look at his hair you turn into stone!" << endl;
			break;
		case 3:
			cout << "You got Chutulu! the god of destruction!" << endl;
			break;
		case 4:
			cout << "You got Mewtwo!" << endl;
			break;
		case 5:
			cout << "You got yourself! The worst of all monstars" << endl;
			break;

		}
}