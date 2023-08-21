#include<iostream>
#include<string>
#include<time.h>
using namespace std;
int main()
{	char message[20];
    int num = 0, ch=0, sp = 0;	
	cout << "Enter string :";
	cin >> message;
	cout << strlen(message)<<endl;
	for(int i = strlen(message)-1 ; i>=0 ; i--)
	{ cout<<i <<" = "<< message[i]<<endl;
	  if(isalpha(message[i]);
	  {  cout<<"<--This is aphabet<<endl";
	     ch++;
	  {else if(isdigit(message[i]))
	  {  cout<<"<--This is numeric."<<endl;
		 num++;
	  }else
	  {  cout<<"<--This is special character."<<endl;
	     sp++;
	  } 
	}
	cout <<"Numeric = "<<num<<endl;
	cout <<"Character = "<<ch<<endl;
	cout <<"Special = "<<sp<<endl;

	system("pause");
	return(0);
}