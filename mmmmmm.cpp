#include <iostream>
#include <string>
using namespace std;
int main()
{ 
    string Name;
	float Sal,S,C;
	cout << "Enter Name : ";
	cin  >> Name;
	cout << "Enter Salary : " ;
	cin  >> Sal;
	cout << "Enter Sale : " ;
	cin  >> S;
	cout << "Enter Commission Percent : ";
	cin  >> C;
	cout << "--------Output-------"<<endl;
	cout << "Your name = " << Name  <<endl;
	cout << "Total Revenue " << Sal+(S*(C/100)) <<endl;
    system("pause");
    return(0);
}