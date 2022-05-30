#include <bits/stdc++.h>
#define eps 1e-15
using namespace std;
typedef long long ll;
const int MOD = 1e9 + 7;
const int N =  (1e5) + 7, M = 2 * N, OO = 1e9;
#define AC ios::sync_with_stdio(0ll);cin.tie(0ll);cout.tie(0ll); cin.sync_with_stdio(0ll);
ll fastPower(ll x, ll p,ll mod) {
    if (!p) return 1;
    ll y = fastPower(x, p >> 1, mod);
    y = (y * y) % mod;
    if (p&1) y = (x * y) % mod;
    return y;
}
int main()
{
    ll n;
    cin>>n;
    ll node=(1ll<<n)-2;
    cout<<(6*fastPower(4,node,MOD))%MOD;
 
 
 
 
 
 
 
 
    return 0;
}