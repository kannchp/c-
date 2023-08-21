#include<iostream>
#include<string>
#include<time.h>
using namespace std;
int main()
{ srand(time(NULL));
  for(int i=1; i<=20;i++)
  {cout <<1000+rand()%8999<<endl;
  }
  system("pause");
  return(0);
}