#include<iostream>
using namespace std;

unsigned long long factorial(unsigned int n)
{
    unsigned long long fact=1;
    for (unsigned int i=1;i<=n;i++)
    {
        fact*=i;
    }
    return fact;    
}

int main()
{
    unsigned int X;
    cout<<"Enter a posituve number: ";
    cin>>X;
    cout<<"Factorial of" <<X<<"is"<<factorial(X)<<endl;
    return 0;

}
