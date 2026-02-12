#include<iostream>
using namespace std;
class Numbers
{
    int n,i;
    public:
    void getValue()
    {
        cout<<"Enter value of n: ";
        cin>>n;
    }
    void display()
    {
        for(int i=1;i<=n;i++)
        cout<<i<<"";
    }
};
int main()
{
    Numbers object;
    object.getValue();
    object.display();
    return 0;
}