#include <iostream>
using namespace std;
int main ()
{
	int first,second,third,midterm,final;
	float QTotal,T;
	string score;
	cout << "==========QUIZZES===========\n" ;
	cout << "Enter first quizz (10):";
	cin >> first;
	cout << "Enter second quizz(10):";
	cin >> second;
	cout << "Enter third quizz (10):";
	cin >> third;
	cout << "==========MID-TERM==========\n";
	cout << "Enter mid-term (40):";
	cin >> midterm;
	cout << "==========FINAL=============\n";
	cout << "Enter final (50):";
	cin >> final;
	cout << "Quizz Total:";
	cin >> QTotal;
	cout << "Mid term:";
	cin >> midterm;
	cout << "Final:";
	cin >> final;
	cout << "Total:" << final+QTotal+midterm << endl;
	T = final+QTotal+midterm;
	cout << "Your score is " <<  ((T>=50)? "PASS ":"FAIL ") << endl;
	system ("pause");
	return (0);
}