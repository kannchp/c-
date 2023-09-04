#include <iostream>
using namespace std;
int add(int n1, int n2)
{ return(n1+n2);
}
int sub(int n1, int n2)
{ return(n1-n2);
}
int mul(int n1, int n2)
{ return(n1*n2);
}
int main()
{
	int num1, num2;
	for(int i = 1;i<=3;i++)
	{
		cout << "Input number 1 : ";
		cin >> num1;
		cout << "Input number 2 : ";
		cin >> num2;
	
		//int sum;
		//sum = add(num1,num2);
		//sum = sub(num1,num2);
		//sum = mul(num1,num2);
		//cout << "Result of add = "<<add(num1,num2)<<endl;
		cout <<"Rusult of add = "<<add(num1,num2)<<endl;
		cout <<"Rusult of sub = "<<sub(num1,num2)<<endl;
		cout <<"Rusult of mul = "<<mul(num1,num2)<<endl;
	}
	add(num1,num2);
	sub(num1,num2);
	mul(num1,num2);
	system("pause");
	return 0;
}
