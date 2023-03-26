#include<bits/stdc++.h>
using namespace std;
void print_butterfly(int n)
{
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=i; j++)
        {
            cout<<"*";
        }
        for(int k=0; k<2*(n-i); k++)
        {
            cout<<" ";
        }
        for(int l=1; l<=i; l++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    for(int i=n; i>=1; i--)
    {
        for(int j=1; j<=i; j++)
        {
            cout<<"*";
        }
        for(int k=1; k<=2*(n-i); k++)
        {
            cout<<" ";
        }
        for(int l=1; l<=i; l++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
}
int main()
{
    int n;
    cout<<"Enter the number of rows"<<endl;
    cin>>n;
    print_butterfly(n);
}