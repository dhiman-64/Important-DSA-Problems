#include<bits/stdc++.h>
using namespace std;


int main()
{
    pair<int, int> p = {1,3};
    // cout<<p<<endl;
    cout<<p.first<<" "<<p.second;
    cout<<endl;
    
    pair<int , pair<int , int>> pp = {2, {4, 6}};
    
    cout<<pp.first<<" "<<pp.second.first<<" "<<pp.second.second;
    cout<<endl;
    
    pair<int,int> arr[] = {{1,2} , {3,4} , {5,6}};
    cout<<arr[1].second;
}
