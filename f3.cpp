#include<iostream>
#include<string>
#include<time.h>
using namespace std;
int main()
{	char message[20];
	cout << "Enter string :";
	cin >> message;
	cout << strlen(message)<<endl;
	for(int i = 0;i<strlen(message)-1;i++)
	{ cout<<i <<" = "<< message[i]<<endl;
	}

	system("pause");
	return(0);
}