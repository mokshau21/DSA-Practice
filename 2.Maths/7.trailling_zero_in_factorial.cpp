#include<bits/stdc++.h>
using namespace std;
void print_trailling_zero_in_factorial(int n)
{
    int count=0;
    int i=5;
    while(n/i>=1)
    {
        count+=n/i;
        i=i*5;
    }
    cout<<count<<endl;
}
int main()
{
    int n;
    cout<<"Enter the number"<<endl;
    cin>>n;
    print_trailling_zero_in_factorial(n);
}