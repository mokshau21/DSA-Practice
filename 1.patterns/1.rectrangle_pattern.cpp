#include<bits/stdc++.h>
using namespace std;
void print_rectangle(int r,int c){
    for(int i=0; i<r; i++)
    {
        for(int j=0; j<c; j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
}
int main(){
    int rows,columns;
    cout<<"Enter the number of Rows"<<endl;
    cin>>rows;
    cout<<"Enter the number of columns"<<endl;
    cin>>columns;
    print_rectangle(rows,columns);
}