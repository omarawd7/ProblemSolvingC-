#include <bits/stdc++.h>
#define eps 1e-15
using namespace std;
typedef long long ll;
const int MOD = 1e9 + 7;
const int N =  (1e5) + 7, M = 2 * N, OO = 1e9;
#define AC ios::sync_with_stdio(0ll);cin.tie(0ll);cout.tie(0ll); cin.sync_with_stdio(0ll);
int main()
{ //
    int t;
    cin>>t;
    while(t--){
        int n,arr[45],mini=1e9;
        cin>>n;
        for(int i=0;i<n;++i){
            cin>>arr[i];
            mini=min(mini,arr[i]);
        }
        bool f=0;
        for(int i=0;i<n;++i){
            if(arr[i]!=mini){
                f=1;
                break;
            }
        }
        if(f){
            int gcd=0;
            for(int i=0;i<n;++i){
                gcd=__gcd(gcd,arr[i]-mini);
            }
            cout<<gcd<<"\n";
        }
        else{
            cout<<-1<<"\n";
        }
    }
 
 
 
 
 
 
 
 
    return 0;
}