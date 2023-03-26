#include<bits/stdc++.h>
using namespace std;
void print_number_pattern(int n)
{
    for(int i=n; i>=1; i--)
    {
        for(int j=1; j<i; j++)
        {
            cout<<" ";
        }
        for(int j=1; j<=n-i+1; j++)
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }
}
int main()
{
    int n;
    cout<<"Enter the number of rows"<<endl;
    cin>>n;
    print_number_pattern(n);
}