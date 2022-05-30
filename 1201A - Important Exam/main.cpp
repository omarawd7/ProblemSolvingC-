#include <bits/stdc++.h>
#define pi 3.14159
using namespace std;
typedef long long ll;
//omar
const ll MOD = 1e9 + 7;
const ll N = 1e5 + 7, M = 2*N, OO = 1e9;
#define AC ios::sync_with_stdio(0);cin.tie(0);cout.tie(0); cin.sync_with_stdio(0);
int main() {
    int n,m,answers[1005];
    char arr[1005][1005];
    cin>>n>>m;
    for(int i=0;i<n;++i){
        for(int j=0;j<m;++j){
            cin>>arr[i][j];
        }
    }
    for(int i=0;i<m;++i){
        cin>>answers[i];
    }
    int ans=0;
    for(int i=0;i<m;++i){
        map<char,int>freq;
        int maxi=0;
        for(int j=0;j<n;++j){
            freq[arr[j][i]]++;
        }
        for(auto it:freq){
            maxi=max(maxi,it.second);
        }
        ans+=(maxi*answers[i]);
    }
    cout<<ans;
}