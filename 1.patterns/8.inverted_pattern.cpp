#include<bits/stdc++.h>
using namespace std;
void print_inverted_pattern(int n)
{
    for(int i=n; i>=1; i--)
    {   
        for(int j=1; j<=i; j++)
        {
            cout<<j;
        }
        cout<<endl;
    }
}
int main()
{
    int n;
    cout<<"Enter the number of rows"<<endl;
    cin>>n;
    print_inverted_pattern(n);
}