#include <bits/stdc++.h>
#define pi 3.14159
using namespace std;
//omar
typedef long long ll;
const ll MOD = 1e9 + 7;
const ll N = 1e5 + 7, M = 2*N, OO = 1e9;
#define AC ios::sync_with_stdio(0);cin.tie(0);cout.tie(0); cin.sync_with_stdio(0);
ll prefix[N],suffix[N],total[N],t[N],arr[N];
int main() {
    int n,k;
    cin>>n>>k;
    for(int i=1;i<=n;++i){
        cin>>arr[i];
    }
    for(int i=1;i<=n;++i){
        cin>>t[i];
        if(t[i]){
            prefix[i]=prefix[i-1]+arr[i];
        }
        else{
            prefix[i]=prefix[i-1];
        }
        total[i]=total[i-1]+arr[i];
    }
    for(int i=n;i>=1;--i){
        if(t[i]){
            suffix[i]=suffix[i+1]+arr[i];
        }
        else{
            suffix[i]=suffix[i+1];
        }
    }
    ll ans=0;
    for(int i=1;i<=n-k+1;++i){
        ll left=prefix[i-1];
        ll right=suffix[i+k];
        ll mid=total[i+k-1]-total[i-1];
        ans=max(ans,left+mid+right);
    }
    cout<<ans;
 
 
 
}