#include<iostream>
using namespace std;
class Primenumber
{
    public:
       int num;
    public:
       void input()
    {
        cout<<"Enter a Number:";
        cin>>num;
    }
       void checkPrime()
    {
        if(num<=1)
        {
            cout<<num<<"is not prime number.";
            return;
        }
        for (int i=2;i<=num/2;i++)
        {
            if(num%i==0)
            {
                cout<<num<<"is not a prime number.";
                return;
            }
        }   
        cout<<num<<"is not a prime number.";

    }
};
int main()
{
    Primenumber p;
    p.input();
    p.checkPrime();

    return 0;
}