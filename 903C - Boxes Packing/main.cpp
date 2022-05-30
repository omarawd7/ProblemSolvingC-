#include <iostream>
#include <bits/stdc++.h>
using namespace std;
 
int n ;
int c=0 ;
solve(int arr[]){
for(int i=0;i<n;i++){
 
 
 
}
 
}
int main()
{
 
int x;
int n ;
int c=0 ;
map<int,int>mp;
cin>>n;
//int arr [n];
for(int i=0;i<n;i++){
    cin>>x;
    mp[x]++;
}
//solve(arr);
for(const auto&p:mp){   
 
    c=max(c,p.second);
}
cout<<c;
    return 0;
}
