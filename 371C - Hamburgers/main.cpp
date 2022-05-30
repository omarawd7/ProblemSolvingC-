#include <bits/stdc++.h>
#define pi 3.14159
using namespace std;
typedef long long ll;
const ll MOD = 1e9 + 7;
const int N = 1e5 + 7, M = 1e7, OO = 0x3f3f3f3f;
#define AC ios::sync_with_stdio(0);cin.tie(0);cout.tie(0); cin.sync_with_stdio(0);
int main()
{
    string s;
    cin>>s;
    ll needBread=0,needChesse=0,needSuas=0;
    for(int i=0;i<s.size();++i){
        if(s[i]=='C'){
            needChesse++;
        }
        else if(s[i]=='B'){
            needBread++;
        }
        else{
            needSuas++;
        }
    }
    ll bread,suas,cheese,priceBread,priceSuas,priceCheese,total;
    cin>>bread>>suas>>cheese;
    cin>>priceBread>>priceSuas>>priceCheese;
    cin>>total;
    ll low=0,high=1e13;
    while(low<=high){
        ll mid=(low+high)/2;
        ll midBread=mid*needBread;
        ll midCheese=mid*needChesse;
        ll midSuas=mid*needSuas;
        ll buyBread=max(midBread-bread,0ll);
        ll buyCheese=max(midCheese-cheese,0ll);
        ll buySuas=max(midSuas-suas,0ll);
        buyBread*=priceBread,buyCheese*=priceCheese;
        buySuas*=priceSuas;
        if(buyBread+buyCheese+buySuas<=total){
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }
    cout<<low-1;
    return 0;
}