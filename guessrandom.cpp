#include <iostream>
using namespace std;
#include <cstdlib> // for rand() and srand() functions
#include <ctime>   // for time() function
int main()
{
	cout << "###Welcome to guessing number game###" << endl;
	cout << "Secret number has been chosen" << endl;
	int CheckNum = rand() % 10 + 1;
	int guess;
    int num = 0;
	do{
		cout << "Guess the number (1 to 10): ";
        cin >> guess;
		num++;
		if (guess < CheckNum) {
            cout << "The secret number is higher" << endl;
		} else if (guess > CheckNum) {
            cout << "The secret number is lower" << endl;
        } else {
			cout << "Congratulations!" << endl;
            cout << "The secret number is " << CheckNum << endl;
            cout << "You made " << num << " guesses" << endl;
        }
	  }while (guess != CheckNum);
	return (0);
}