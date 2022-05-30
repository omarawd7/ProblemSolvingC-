#include <bits/stdc++.h>
#define eps 1e-15
using namespace std;
typedef long long ll;
const int MOD = 1e9 + 7;
const int N =  (1e5) + 7, M = 2 * N, OO = 1e9;
#define AC ios::sync_with_stdio(0ll);cin.tie(0ll);cout.tie(0ll); cin.sync_with_stdio(0ll);
 
int main()
{
    vector<ll>ans;
    ll level=1;
    while(1){
        ll height=level*(level+1);
        ll basis=level*(level-1)/2;
        if(height+basis>1e9){
            break;
        }
        ans.push_back(height+basis);
        level++;
    }
    int t;
    cin>>t;
    while(t--){
        int n,cnt=0;
        cin>>n;
        while(n>1){
            int idx=upper_bound(ans.begin(),ans.end(),n)-ans.begin();
            idx--;
            n-=ans[idx];
            cnt++;
        }
        cout<<cnt<<"\n";
    }
 
 
 
 
 
 
 
 
    return 0;
}