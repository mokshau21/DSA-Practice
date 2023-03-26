#include<bits/stdc++.h>
using namespace std;
void print_floyd_triangle(int n)
{
    int ctr=1;
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=i; j++)
        {
            cout<<" "<<ctr<<" ";
            ctr++;
        }
        cout<<endl;
    }
}
int main()
{
    int n;
    cout<<"Enter the number of rows"<<endl;
    cin>>n;
    print_floyd_triangle(n);
}