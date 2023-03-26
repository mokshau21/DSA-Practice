#include<bits/stdc++.h>
using namespace std;
void print_hollow_rectrangle(int r,int c)
{
    for(int i=0;i<r; i++)
    {
        for(int j=0; j<c; j++)
        {
            if(i==0 || j==c-1 || i==r-1 || j==0)
            {
                cout<<" * ";
            }
            else{
                cout<<"   ";
            }
        }
        cout<<endl;
    }
}
int main()
{
    int rows,columns;
    cout<<"Enter the number of rows"<<endl;
    cin>>rows;
    cout<<"Enter the number of columns"<<endl;
    cin>>columns;
    print_hollow_rectrangle(rows,columns);
}