#include<bits/stdc++.h>
using namespace std;
void print_armstrong(int n)
{
    int temp=n;
    int sum=0;
    int value;
    while(n)
    {
        int rem=n%10;
        value=rem*rem*rem;
        sum+=value;
        n=n/10;
    }
    if(sum==temp)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
}
int main()
{
    int n;
    cout<<"Enter the number"<<endl;
    cin>>n;
    print_armstrong(n);
}