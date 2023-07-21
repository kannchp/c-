#include <iostream>
#include <string>
using namespace std;
int main()
{
	int m ;
	cout << " Amount to be withdraw : ";
	cin >> m;
	cout << " 1000 : " << m/1000                    << endl;
	cout << " 100 : " << (m%1000)/100               << endl;
	cout << " 50 : " << ((m%1000)%100)/50           << endl;

	cout << " 20 : " << (((m%1000)%100)%50)/20      << endl;
	system("pause");
	return(0);
}