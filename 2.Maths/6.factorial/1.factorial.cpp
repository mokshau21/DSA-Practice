#include<bits/stdc++.h>
using namespace std;
void print_factorial(int n)
{
    int fact=1;
    for(int i=1; i<=n; i++)
    {
        fact*=i;
    }
    cout<<fact<<endl;
}
int main()
{
    int n;
    cout<<"Enter the number"<<endl;
    cin>>n;
    print_factorial(n);
}
