#include<bits/stdc++.h>
using namespace std;
int print_prime_number(int n)
{
    int flag=0;
    for(int i=2; i<=sqrt(n); i++)
    {
        if(n%i==0)
        {
            flag=1;
            cout<<"NO"<<endl;
            break;
        }
    }
    if(flag==0)
    {
        cout<<"YES"<<endl;
    }
}
int main()
{
    int n;
    cout<<"Enter the number"<<endl;
    cin>>n;
    print_prime_number(n);
}