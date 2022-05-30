#include <bits/stdc++.h>
#define pi 3.14159
using namespace std;
typedef long long ll;
const ll MOD = 1e9 + 7;
const int N = 1e5 + 7, M = 1e7, OO = 0x3f3f3f3f;
#define AC ios::sync_with_stdio(0);cin.tie(0);cout.tie(0); cin.sync_with_stdio(0);
int main()
{
    int t;
    cin>>t;
    while(t--){
        ll k,n,a,b;
        cin>>k>>n>>a>>b;
        if(b*n>=k){
            cout<<"-1\n";
            continue;
        }
        ll low=0,high=n;
        while(low<=high){
            ll mid=(low+high)/2;
            if(mid*a+(n-mid)*b>=k){
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        cout<<low-1<<"\n";
    }
 
 
    return 0;
}