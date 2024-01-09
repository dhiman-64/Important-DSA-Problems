#include<iostream>
using namespace std;


int main()
{
    int n;
    cin>>n;
    
    for(int i=0 ; i<n ; i++)
    {
        //spacing
        for(int j=0 ; j<i ; j++)
        {
            cout<<" ";
        }
        
        //main content
        for(int j=0 ; j<2*n-(2*i+1) ; j++)
        {
            cout<<"*";
        }
        
        //spacing
        for(int j=0 ;j<i ; j++)
        {
            cout<<" ";
        }
        
    cout<<endl;
    }
}
