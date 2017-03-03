#include <iostream>
using namespace std;
int main() {
	char letters;
	char answer;
	int question = 1;
	int sleeping = 0;
	int mulan = 0;
	int jazmin = 0;
	int tiana = 0;

	cout << "Welcome to the totally legit Princess quiz!!!" << endl;



	cout << "Whats your Favrote Color?" << endl;
	cout << "a=Red, b=Blue,c=Green,d=Pink" << endl;
	cin >> answer;
	if (answer == 'a')
		jazmin = jazmin + 1;
	else if (answer == 'b')
		sleeping = sleeping + 1;
	else if (answer == 'c')
		tiana = tiana + 1;
	else if (answer = 'd')
		mulan = mulan + 1;



	cout << "What’s your favorite food?" << endl;
	cout << "a=Soup, b=Fine dinning, c=Sea food, d=Chinese" << endl;
	cin >> answer;
	if (answer == 'a')
		jazmin = jazmin + 1;
	else if (answer == 'b')
		sleeping = sleeping + 1;
	else if (answer == 'c')
		tiana = tiana + 1;
	else if (answer = 'd')
		mulan = mulan + 1;




	cout << "What Season do you prefer" << endl;
	cout << "a=Winter,b=Summer,c=Spring,d=Fall" << endl;
	cin >> answer;
	if (answer == 'a')
		jazmin = jazmin + 1;
	else if (answer == 'b')
		sleeping = sleeping + 1;
	else if (answer == 'c')
		tiana = tiana + 1;
	else if (answer = 'd')
		mulan = mulan + 1;



	cout << "Where would you like to live?" << endl;
	cout << "a=Bejiing,b=Paris,c=Russia,d=Dubai" << endl;
	cin >> answer;
	if (answer == 'a')
		jazmin = jazmin + 1;
	else if (answer == 'b')
		sleeping = sleeping + 1;
	else if (answer == 'c')
		tiana = tiana + 1;
	else if (answer = 'd')
		mulan = mulan + 1;


	cout << "Who is your least favorite movie character" << endl;
	cout << "a=Adam Sandler,b=Sandra Bulleck,c=Will Smith,d=Samuel L. Jackson" << endl;
	cin >> answer;
	if (answer == 'a')
		jazmin = jazmin + 1;
	else if (answer == 'b')
		sleeping = sleeping + 1;
	else if (answer == 'c')
		tiana = tiana + 1;
	else if (answer = 'd')
		mulan = mulan + 1;


	cout << "What is your Favorite Fast Food" << endl;
	cout << "a=Wendys,b=McDonalds,c=Burger King,d=Carl's Jr." << endl;
	cin >> answer;
	if (answer == 'a')
		jazmin = jazmin + 1;
	else if (answer == 'b')
		sleeping = sleeping + 1;
	else if (answer == 'c')
		tiana = tiana + 1;
	else if (answer = 'd')
		mulan = mulan + 1;



	cout << "Choose" << endl;
	cout << "a=Swimming,b=Dancing,c=Adventure,d=sleep" << endl;
	cin >> answer;
	if (answer == 'a')
		jazmin = jazmin + 1;
	else if (answer == 'b')
		sleeping = sleeping + 1;
	else if (answer == 'c')
		tiana = tiana + 1;
	else if (answer = 'd')
		mulan = mulan + 1;



	cout << "Preferd celebrtiy" << endl;
	cout << "a=Kobe Bryant,b=LeBron James,c=Steph Curry,d=Carmelo Anthony" << endl;
	cin >> answer;
	if (answer == 'a')
		jazmin = jazmin + 1;
	else if (answer == 'b')
		sleeping = sleeping + 1;
	else if (answer == 'c')
		tiana = tiana + 1;
	else if (answer = 'd')
		mulan = mulan + 1;





	if ((jazmin > sleeping) && (jazmin > tiana) && (jazmin > mulan))
		cout << "you are Jazmin!!!" << endl;
	else if ((sleeping > jazmin) && (sleeping > tiana) && (sleeping > mulan))
		cout << "you are Sleeping Beauty!!!" << endl;
	else if ((tiana > jazmin) && (tiana > sleeping) && (tiana > mulan))
		cout << "you are Tiana!!!" << endl;
	else if ((mulan > jazmin) && (mulan > tiana) && (mulan > sleeping))
		cout << "you are Mulan!!!" << endl;
}