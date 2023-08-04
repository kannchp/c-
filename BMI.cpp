#include <iostream>
#include <string>
using namespace std;
int main()
{ float height,weight;
  string gender;
  float BMI;
  int age;
  cout << "Enter Age ";
  cin >> age;
  cout << "Enter Gender ";
  cin >> gender;
  cout << "Enter Height ";
  cin >> height;
  cout << "Enter Weight ";
  cin >> weight;
  BMI = weight/(height/100 * height/100);
  cout << "BMI = " << BMI <<endl;
     if (BMI <= 18.5) cout << "underweight\n";
  else if(BMI <= 25 ) cout << "Normal\n";
  else if(BMI <= 35 ) cout << "Overweight\n";
  else if(BMI <= 40 ) cout << "Obesity\n";
  else cout << endl;
  return(0);
}