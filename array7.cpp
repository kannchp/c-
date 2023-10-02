#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
int main()
{    int num[3][3];
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
    }
    system("pause");
    return 0;
}