#include<bits/stdc++.h>
using namespace std;
void print_pallindrome_number(int n)
{
    int temp=n;
    int sum=0;
    while(n)
    {
        int rem=n%10;
        sum=sum*10+rem;
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
    print_pallindrome_number(n);
}