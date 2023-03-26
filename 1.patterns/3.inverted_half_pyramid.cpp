#include<bits/stdc++.h>
using namespace std;
void print_inverted_pyramid(int n){
    for(int i=0; i<n; i++)
    {
        for(int j=n-i; j>=1; j--)
        {
            cout<<"*";
        }
        cout<<endl;
    }
}
int main(){
    int rows,columns;
    cout<<"Enter the number of rows"<<endl;
    cin>>rows;
    print_inverted_pyramid(rows);
}