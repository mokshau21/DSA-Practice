#include<bits/stdc++.h>
using namespace std;
void print_reverse(int n)
{
    int sum=0;
    while(n)
    {
        int rem=n%10;
        sum=sum*10+rem;
        n=n/10;
    }
    cout<<sum<<endl;
}
int main()
{
    int n;
    cout<<"Enter the number"<<endl;
    cin>>n;
    print_reverse(n);
}