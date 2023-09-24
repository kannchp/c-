#include <iostream>
#include <iomanip>
#include <time.h>
using namespace std;
int main()
{
	cout << "Element Value Histogram" << endl;
	cout << endl;
	int num[10];
	srand(time(NULL));
	for(int i = 0; i < 10;i++)
	{
		num[i] = 1+rand()%29;
		cout<<"  "<<i<<"   "<<setw(2)<< num[i]<<" ";

		for(int n = 0 ; n < num[i] ;n++)
		{
			cout << "*" ;
		}
		cout << endl;
	
	}
	return(0);
}