#include<iostream>
#include<string>
#include<time.h>
using namespace std;
int main()
{ char message[20];
  cout << "Enter string :";
  cin >> message;
  cout << strlen(message)<<endl;
  system("pause");
  return(0);
}