#include<bits/stdc++.h>
using namespace std;
#define ull unsigned long long
void print_factorial_big_number(ull n)
{
    ull fact=1;
    for(int i=2; i<=n; i++)
    {
        fact*=i;
    }
    cout<<fact<<endl;
}
int main()
{
    ull n;
    cout<<"Enter the number"<<endl;
    cin>>n;
    print_factorial_big_number(n);
}