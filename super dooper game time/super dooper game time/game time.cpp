#include <iostream>
#include <windows.h>
using namespace std;
int main() {
	char input;
	int room= 0;

	while (input = 'q')
		switch (room) {
		case 0:
			cout << "you are in room 1! you can go East(e)";
			cin >> input;
			room = 1;
			if (input == 'e')
				cout << "You have enterd the room with no windows, but 3 doors" << endl;
			break;
			//////////////room number 2
		case 1:	
			cout << "you can go South(s),West (w),North (n)";
			cin >> input;
			room = 2;
			if (input == 's')
			if (input == 'w')
			if (input == 'n')
			break;
			////////////////////////room number 3
		case 2:
			cout << "you are in room 3! you can go South(s) or West (w)";
			cin >> input;
			room = 3;
			if (input == 's')
				cout << "go on to the next room" << endl;
			break;
		}//end of loop
}//end of program