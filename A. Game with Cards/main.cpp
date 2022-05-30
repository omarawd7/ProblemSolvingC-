#include <bits/stdc++.h>
#define eps 1e-15
using namespace std;
typedef long long ll;
const int MOD = 1e9 + 7;
const int N =  (1e5) + 7, M = 2 * N, OO = 1e9;
#define AC ios::sync_with_stdio(0ll);cin.tie(0ll);cout.tie(0ll); cin.sync_with_stdio(0ll);
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,m,arr1[55],arr2[55],maxi1=0,maxi2=0;
        cin>>n;
        for(int i=0;i<n;++i){
            cin>>arr1[i];
            maxi1=max(maxi1,arr1[i]);
        }
        cin>>m;
        for(int i=0;i<m;++i){
            cin>>arr2[i];
            maxi2=max(maxi2,arr2[i]);
        }
        if(maxi1>maxi2){
            cout<<"Alice\nAlice\n";
        }
        else if(maxi1==maxi2){
            cout<<"Alice\nBob\n";
        }
        else{
            cout<<"Bob\nBob\n";
        }
    }
 
 
 //
 
 
 
    return 0;
}