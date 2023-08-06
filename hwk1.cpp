#include <iostream>
#include <string>
using namespace std;
int main()
{ char input1,input2,input3;
  int A = 10;
  int B = 20;
  int C = 30;
  int T = 0;
  int num1 = 0,num2 = 0,num3 = 0;
  cout << "Enter Character (A,B,C) : ";
  cin >> input1; 
  if (input1 == 'A'){
        num1 += A;
    }else if(input1 == 'B'){
        num1 += B;
    }else if(input1 == 'C'){
        num1 += C;
    }
  cout << "Enter Character (A,B,C) : ";
  cin >> input2; 
  if (input2 == 'A'){
        num2 += A;
    }else if(input2 == 'B'){
        num2 += B;
    }else if(input2 == 'C'){
        num2 += C;
    }
  cout << "Enter Character (A,B,C) : ";
  cin >> input3; 
  if (input3 == 'A'){
        num3 += A;
    }else if(input3 == 'B'){
        num3 += B;
    }else if(input3 == 'C'){
        num3 += C;
    }
  T = num1+num2+num3;
  cout << input1 << " = " << num1 << " , " << input2 << " = " << num2 << " , " << input3 << " = " << num3 <<endl;
  cout << input1 << " + " << input2 << " + " << input3 << " = " << T <<endl;
  return (0);
}