#include <iostream>
using namespace std;
#include <cstdlib> // for rand() and srand() functions
#include <ctime>   // for time() function
void checkNum(int random);
int main()
{
	srand(static_cast<unsigned int>(std::time(nullptr)));
	cout << "###Welcome to guessing number game###" << endl;
	cout << "Secret number has been chosen" << endl;
    int random = rand() % 10 + 1;
    checkNum(random);
    
return(0);
}

void checkNum(int random)
{
    int num = 0;
    int guess;
    do{
        cout << "Guess the number (1 to 10): ";
        cin >> guess;
		num++;
		if (guess < random) {
            cout << "The secret number is higher" << endl;
		} else if (guess > random) {
            cout << "The secret number is lower" << endl;
        } else {
			cout << "Congratulations!" << endl;
            cout << "The secret number is " << random << endl;
            cout << "You made " << num << " guesses" << endl;
        }
	  }while (guess != random);
      
}