#include <iostream>
#include <string>
using namespace std;
int sum(int x,int y)
{	return(x+y);
}
int sum(double x, double y)
{	return(x+y);
}
int main()
{	cout<<sum(10,15)<<endl;
	cout<<sum(25.25,10.45)<<endl;
	system("pause");
	return 0;
}
