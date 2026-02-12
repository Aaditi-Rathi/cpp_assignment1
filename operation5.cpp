#include<iostream>
using namespace std;
class Student
{
    public:
    int Rollnumber;
    string Name;
    string Division;
    string Department;
    public:
    void GetInfo()
    {
        cout<<"Enter Roll Number of student:"<<endl;
        cin>>Rollnumber;
        cout<<"Enter Name of student:"<<endl;
        cin>>Name;
        cout<<"Enter Division of student:"<<endl;
        cin>>Division;
        cout<<"Enter Department of student:"<<endl;
        cin>>Department;
    }
    void ShowInfo()
    {
        cout<<"Roll Number of Student:"<<Rollnumber;
        cout<<"Name of Student:"<<Name;
        cout<<"Division of Student:"<<Division;
        cout<<"Department of Student:"<<Department;
    }
};
int main()
{
    Student Object[10];
    for (int i=0;i<10;i++)
    {
        cout<<"Get Information of Student:"<<i+1;
        Object[i].GetInfo();
    }
     for (int i=0;i<10;i++)
    {
        cout<<"Show Information of Student:"<<i+1;
        Object[i].ShowInfo();
    }
}