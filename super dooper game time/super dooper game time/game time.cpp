#include <iostream>
#include <windows.h>
using namespace std;
int main() {
	char input;
	int room;

	while (input)
		switch (room) {
		case 1:
			cout << "you are in room 1! you can go East(e)";
			cin >> input;
			room = 1;
			if (input == 'e')
				cout << "go on to the next room" << endl;
			break;
			//////////////room number 2
		case 2:	
			cout << "you are in room 2! you can go South(s),West (w),North";
			cin >> input;
			room = 2;
			if (input == 's')
				cout << "go on to the next room" << endl;
			break;
			////////////////////////room number 3
		case 3:
			cout << "you are in room 3! you can go South(s) or West (w)";
			cin >> input;
			room = 3;
			if (input == 's')
				cout << "go on to the next room" << endl;
			break;
		}//end of loop
}//end of program