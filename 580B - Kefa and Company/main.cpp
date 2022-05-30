#include <bits/stdc++.h>
#define pi 3.14159
using namespace std;
typedef long long ll;
const ll MOD = 1e9 + 7;
const int N = 1e5 + 7, M = 1e7, OO = 0x3f3f3f3f;
#define AC ios::sync_with_stdio(0);cin.tie(0);cout.tie(0); cin.sync_with_stdio(0);
int main()
{
    int n,d;
    vector<pair<int,int>>v;
    cin>>n>>d;
    for(int i=0;i<n;++i){
        int money,friends;
        cin>>money>>friends;
        v.emplace_back(money,friends);
    }
    sort(v.begin(),v.end());
    int l=0,r=0;
    ll sum=0,ans=0;
    while(r<n){
        sum+=v[r].second;
        if(v[r].first-v[l].first>=d){
            while(v[r].first-v[l].first>=d){
                sum-=v[l].second;
                l++;
            }
        }
        r++;
        ans=max(ans,sum);
    }
    cout<<ans;
 
 
}