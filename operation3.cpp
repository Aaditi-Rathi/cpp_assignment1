#include<iostream>
using namespace std;
int main()
{
    int n,i,sum=0;
    cout<<"Enter the number: ";
    cin>>n;
    for(i=0;i<=n;i++)
    sum += i;
    cout<<"sum="<<sum;
    return 0;
}