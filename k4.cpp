#include <iostream>
using namespace std;
int main()
{ 
	int c,score;
	cout << "Input C++ Score : ";
	cin >> c;
	cout <<"You "<<((c>=50)? "pass ":"fail ")<< "with score " << c <<endl;
	system("pause");
	return (0);
}