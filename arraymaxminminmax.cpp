#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
void Input(int &numS,int quiz[10],int mid[10],int final[10]);
void Viewall(int &numS,int quiz[10],int mid[10],int final[10],int Sum[10]);
void Viewid(int &numS,int quiz[10],int mid[10],int final[10]);
void Sortscore(int numS,int Sum[10]);
int main()
{	int nums = 0;
	int quiz[10],mid[10],final[10],Sum[10];
	char menu;
	do
	{
	cout<<"===================="<<endl;
	cout<<"       MENU         "<<"\n";
	cout<<"===================="<<"\n";
	
		cout<<"1.Input student records"<<"\n";
        cout<<"2.View all student records"<<"\n";
        cout<<"3.Show a student by ID"<<"\n";
		cout<<"4.Sort Sum Score"<<"\n"; //call function Sortscore()
        cout<<"5.Exit"<<"\n";
        cout<<"Select menu : ";
        cin>>menu;
		if(menu == '1')
		{   
            Input(nums,quiz,mid,final);
        }
		else if(menu == '2')
		{
			Viewall(nums,quiz,mid,final,Sum);
		}
		else if(menu == '3')
		{
			Viewid(nums,quiz,mid,final);
		}
		else if(menu == '4')
		{
			Sortscore(nums,Sum);
		}

	}while(menu != '5');

	return 0;
}
void Input(int &numS,int quiz[10],int mid[10],int final[10])
{
	cout<<"Input Number of student: ";
	cin>>numS;
	for(int i = 0 ; i<numS ; i++ )
	{
		cout<<"Number"<<i+1<<endl;
		cout<<"Input Quiz: ";
		cin>>quiz[i];
		cout<<"Input Midterm: ";
		cin>>mid[i];
		cout<<"Input Final: ";
		cin>>final[i];
		cout<<endl;
	}

}
void Viewall(int &numS,int quiz[10],int mid[10],int final[10],int Sum[10])
{	float TQuiz=0.0,TMid=0.0,TFinal=0.0;
	cout<<"------------------------------------"<<endl;
	cout<<"StdID   Quiz   Midterm    Final	Sum"<<endl;
	cout<<"------------------------------------"<<endl;
	for(int i = 0; i<numS ; i++ )
	{
		Sum[i] = quiz[i]+mid[i]+final[i];
		cout<<i+1<<setw(9)<<quiz[i]<<setw(9)<<mid[i]<<setw(9)<<final[i]<<setw(9)<<Sum[i]<<endl;
		TQuiz = TQuiz + quiz[i];
		TMid = TMid + mid[i];
		TFinal = TFinal +final[i];
	}
	cout<<"-----------------------------------"<<endl;
	cout<<"Total"<<setw(5)<<TQuiz<<setw(9)<<TMid<<setw(9)<<TFinal<<endl;
	cout<<"-----------------------------------"<<endl;
}
void Viewid(int &numS,int quiz[10],int mid[10],int final[10])
{
	int id;
	cout<<"Input ID: ";
	cin>>id;
	for(int i = 0; i<numS ; i++)
	{
		if(id == i+1)
		{
			cout<<"-----------------------------------"<<endl;
			cout<<"StdID   Quiz   Midterm    Final"<<endl;
			cout<<"-----------------------------------"<<endl;
			cout<<i+1<<setw(9)<<quiz[i]<<setw(9)<<mid[i]<<setw(9)<<final[i]<<endl;
			cout<<"-----------------------------------"<<endl;
		}
		else
		{
			cout<<"Your ID is not found"<<endl;
		}
		break;
	}
}
void Sortscore(int numS,int Sum[10])
{
	cout<<"-------------------"<<endl;
	cout<<"No. Sum_Score"<<endl;
	cout<<"------------------"<<endl;
	for(int i = 0; i<numS ; i++)
	{
		cout<<i+1<<setw(9)<<Sum[i]<<endl;
	}
	for (int i = 0; i < numS -1; i++) {
		int minIndex = i;
		for (int j = i + 1; j < numS; j++) {
			if (Sum[j] < Sum[minIndex]) {
				minIndex = j;
			}
		}
	
	int temp = Sum[i];
	Sum[i] = Sum[minIndex];
	Sum[minIndex] = temp;
	}
	for (int i=0; i < numS; i++){
		cout << Sum[i] <<endl;
	}
	cout<<"------------------"<<endl;
}