#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
int main()
{   int num[3][3];
    string name[3];
    for(int i=0;i<3;i++)
    {    cout<<"Student "<<i+1<<endl;
        cout<<"Enter Name ["<<i+1<<"] :";
        cin>>name[i];
        for(int j=0;j<3;j++)
        {    cout<<"Enter Score  ["<<i<<"]["<<j<<"] :" ;
            cin>>num[i][j];
        }
    }
    cout<<"Show Scores"<<endl;
    cout<<setfill('-')<<setw(40)<<""<<endl;
    cout<<"Student\tMath\tScience\tEnglish\n";
    cout<<setfill('-')<<setw(40)<<""<<endl;
    for(int i=0;i<3;i++)
    {    cout<<i+1<<" "<<name[i]<<"\t";
        for(int j=0;j<3;j++)
        {    cout<<num[i][j]<<"\t";
        }
        cout<<endl;
		cout<<"After Sort Score"<<endl;
		cout<<"----------------"<<endl;
    }
    system("pause");
    return 0;
}
void display(int num[3][3], string name[3])
{	
	int score=0;
	cout<<"Show Scores"<<endl;
    cout<<setfill('-')<<setw(50)<<""<<endl;
    cout<<"Student\tMath\tScience\tEnglish\tGPA\n";
    cout<<setfill('-')<<setw(50)<<""<<endl;
    for(int i=0;i<3;i++)
    {   cout<<i+1<<" "<<name[i]<<"\t";
        for(int j=0;j<3;j++)
        {
			score = num[i][j];
			cout<<num[i][j];	
        }
        cout<<endl;
    }
}
void sortScore(int arr[3][3], string name[3])
{
	for(int i=0;i<3;i++){
		for(int j=0;j<3-1;j++){
			int maxIndex = j;
			for(int k=j+1;k<3;k++){
				if(arr[i][k]) > arr[i][maxIndex]){
					maxIndex = k;
				}
			}
			if (maxIndex != j){
				int temp = arr[i][j];
				arr[i][j] = arr[i][maxIndex];
				arr[i][maxIndex] = temp;
			}
		}
	}
	cout<<"After Sort Score"<<endl;
    cout<<setfill('-')<<setw(50)<<""<<endl;
    cout<<"Student\t1\t2\t3\n";
    cout<<setfill('-')<<setw(50)<<""<<endl;
    for(int i=0;i<3;i++)
    {   cout<<i+1<<" "<<name[i]<<"\t";
        for(int j=0;j<3;j++)
        {
			score = num[i][j];
			cout<<num[i][j];	
        }
        cout<<endl;
    }
}
//ยังไม่เสร็จ
