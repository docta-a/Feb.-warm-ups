#include <windows.h>
#include <iostream>
using namespace std;
int main() {
	int beep1 = 100;
	int beep2 = 900;
	system("Color 4F");
	cout << "Happy Monday" << endl;
	for (int j = 0; j < 7; j++) {
		beep1 += 100;
		Beep(beep1, beep2);
	}for (int j = 0; j < 7; j++) {
		beep1 -= 100;
		Beep(beep1, beep2);
	}
}