#include <iostream>
#include <vector>

using namespace std; 

void randNum() {
	srand(time(0)); 
	int Guess = 0;
	int limit = 3;
	int num =  rand() % 20; 
	while (Guess < limit) {
		int input;
		cout << "Enter a number: ";
		cin >> input;
		if (input != num && Guess != limit) {
			Guess++;
			if (Guess != limit) {
				cout << "Try Again" << endl;
			}
		}
		if (input != num && Guess == limit) {
			cout << "You Lost!" << endl;
		}
		else if (input == num) {
			cout << "You Won!" << endl;
			break;
		}
	}
}


int main() {
	randNum();
	return 0;
}