// Your name
// Your UMKC Email Address
// Today's date
// CS201L Lab 01

#include <iostream>
using namespace std;

int main() {

	float distance, time, velocity;

	cout << "Enter how many miles you are traveling " << endl;
	cin >> distance;

	cout << "How fast are you traveling in mph? " << endl;
	cin >> velocity;

    // Calculate the time it takes here.
	time = 0;

	cout << endl;
	cout << "At " << velocity << " mph it will take " << time << " hours to travel " << distance << " miles." << endl;
	
	return 0;

}