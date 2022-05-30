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
        int n,a[2*N],m,b[2*N],idx=1;
        cin>>n;
        for(int i=1;i<=n;++i){
            cin>>a[i];
        }
        cin>>m;
        for(int i=1;i<=m;++i){
            cin>>b[i];
        }
        for(int i=1;i<=m;++i){
            idx+=b[i];
            idx%=n;
            if(idx==0){
                idx=n;
            }
        }
        cout<<a[idx]<<"\n";
    }
 
 
 
 
 
 
    return 0;
}