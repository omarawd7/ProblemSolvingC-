#include<bits/stdc++.h>
using namespace std;
 
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define MOD 1000000007
#define MOD1 998244353
#define INF 1e18
#define nline "\n"
#define pb push_back
#define ppb pop_back
#define mp make_pair
#define ff first
#define ss second
#define PI 3.141592653589793238462
#define set_bits __builtin_popcountll
#define sz(x) ((int)(x).size())
#define all(x) (x).begin(), (x).end()
 
typedef long long ll;
typedef unsigned long long ull;
typedef long double lld;
 
#ifndef ONLINE_JUDGE
#define debug(x) cerr << #x <<" "; _print(x); cerr << endl;
#else
#define debug(x)
#endif
 
void _print(ll t) {cerr << t;}
void _print(int t) {cerr << t;}
void _print(string t) {cerr << t;}
void _print(char t) {cerr << t;}
void _print(lld t) {cerr << t;}
void _print(double t) {cerr << t;}
void _print(ull t) {cerr << t;}
 
template <class T, class V> void _print(pair <T, V> p);
template <class T> void _print(vector <T> v);
template <class T> void _print(set <T> v);
template <class T, class V> void _print(map <T, V> v);
template <class T> void _print(multiset <T> v);
template <class T, class V> void _print(pair <T, V> p) {cerr << "{"; _print(p.ff); cerr << ","; _print(p.ss); cerr << "}";}
template <class T> void _print(vector <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(set <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(multiset <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T, class V> void _print(map <T, V> v) {cerr << "[ "; for (auto i : v) {_print(i); cerr << " ";} cerr << "]";}
/*    *   *   *   *   *   *   *   *   *   *   *   *   *   *   *   *   *   *   *   *   *   *   *   *   *   *   *   *    *    *   */
         
/*
ababab - ab-l/2 ba-(l-2)/2  even
abababa- ab-l/2 ba-l/2  odd
 
*/
 
void solve()
{
    ll a,b,c,d;
    cin>>a>>b>>c>>d;
    string s;
    cin>>s;
    ll n=s.length();
    ll ac=0,bc=0;
    for (int i = 0; i < n; ++i)
    {
        if(s[i]=='A')ac++;
        if(s[i]=='B')bc++;
    }
   
    if((ac!=a+c+d) || (bc!=b+c+d))
    {
        cout<<"NO"<<endl;
        return;
    }
    vector<string>v;
    for(int i=0;i<n;i++)
    {
        string temp;
        temp+=s[i];
        i++;
        while(s[i]!=s[i-1] && i<n)
        {
            temp+=s[i];
            i++;
        }
        i--;
        
        v.pb(temp);
    }
    
    sort(all(v));
    debug(v)
    b=d;
    ll odd=0;
    vector<ll>ab,ba;
    for(int i=0;i<int(v.size());i++)
    {
        string temp=v[i];
        ll l=temp.size();
        //ababa
        if(l%2)
        {
            odd+=(l-1)/2;
        }
        else if(l==2)
        {
            if(temp[0]=='A')c--;
            else b--;
        }
        else
        {
            if(temp[0]=='A')ab.pb(l/2);
            else ba.pb(l/2);
        } 
    }
    debug(ab)
    debug(ba)
    
    for(int i=0;i<int(ab.size());i++)
    {
        if(c<=0)b-=ab[i]-1;
        else if(c-ab[i]>0)c-=ab[i];
        else
        {
            b-=max(ab[i]-c-1,1ll*0);
            c=0;
        }
    }
    debug(c)
    debug(b)
    for(int i=0;i<int(ba.size());i++)
    {
        if(b<=0)c-=ba[i]-1;
        else if(b-ba[i]>0)b-=ba[i];
        else
        {
            c-=max(ba[i]-b-1,1ll*0);
            b=0;
        }
    }
    if(b<0)b=0;
    if(c<0)c=0;
    
    if(b+c>odd)
    {
        cout<<"NO"<<endl;
        return;
    }
    else{
        cout<<"YES"<<endl;
    }
}
 
int main() {    
#ifndef ONLINE_JUDGE
    freopen("error.txt", "w", stderr);
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
#endif
    
    fastio();
    ll T;cin>>T;
    while(T--){
        solve();
    }
}