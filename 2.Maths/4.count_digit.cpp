#include<bits/stdc++.h>
using namespace std;
void print_digit_count(int n)
{
    int counter=0;
    while(n)
    {
        counter++;
        n=n/10;
    }
    cout<<counter<<endl;
}
int main()
{
    int n;
    cout<<"Enter the number"<<endl;
    cin>>n;
    print_digit_count(n);
}