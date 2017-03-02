#include <iostream>
#include <Windows.h>
using namespace std;

int noise;
void ESS();

int main() {

	ESS();

}


void ESS() {

	cout << "How many times do you want to hear it?" << endl;
	cin >> noise;

	cout << "eat sochoeun's shorts" << endl;
	for (int i = 0; i < noise; i++)
		PlaySound("shorts.wav", NULL, SND_FILENAME);

}