#include <iostream>
using namespace std;
void CalCircle();
void CalRec();

int main()
{
	char Ch;
	do{
		cout << "Proram Calculate of Circle." << endl;
		cout << "***************************" << endl;
		cout << "1. Circle"<<endl;
		cout << "2. Rectangle"<<endl;
		cout << "3. Exit"<<endl;
		cout << "Choose Menu :";
		cin >> Ch;
		
		if(Ch == '1') CalCircle();
			else if(Ch == '2')  CalRec();
				else if(Ch == '3') cout << " Exit "<<endl;
					else cout<<"Wrong Menu"<<endl;
	  }while(Ch != '3');
	  system("pause");
	  return (0);
}

void CalCircle()
{
	float Radius, Area, Circumference;
	cout << "Input radius : ";
	cin >> Radius;
	Area = 3.14f*Radius*Radius;
	Circumference = 2*3.14f*Radius;;
	cout << endl;
	cout << "Area of circle : "<<Area<<endl;
	cout << "Circumference of circle : "<< Circumference<<endl;
	cout << "Diameter of circle : " << (2*Radius) <<endl;
}
void CalRec()
{
	int w,l,Area;
	cout << "Input Width : ";
	cin >> w;
	cout << "Input Length : ";
	cin >> l;
	Area = w*l;
	cout << "Area of Rectangle : "<<Area<<endl;
	cout <<endl;
}
