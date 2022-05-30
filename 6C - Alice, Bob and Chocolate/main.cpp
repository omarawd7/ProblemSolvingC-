#include <bits/stdc++.h>
using namespace std;
#define eps 1e-15
typedef long long ll;
const ll MOD = 1e9 + 7;
const ll N =  (1e5) + 7, M = 2 * N, OO = 1e9;
#define AC ios::sync_with_stdio(0ll);cin.tie(0ll);cout.tie(0ll); cin.sync_with_stdio(0ll);
int main() {
    int arr[N],alice=0,bob=0,n;
    cin>>n;
    for(int i=0;i<n;++i){
        cin>>arr[i];
    }
    int l=0,r=n-1;
    while(l<=r){
        if(l==r){
            alice++;
            break;
        }
        if(arr[l]>arr[r]){
            arr[l]-=arr[r];
            r--;
            bob++;
            if(l==r){
                alice++;
                break;
            }
        }
        else if(arr[r]>arr[l]){
            arr[r]-=arr[l];
            l++;
            alice++;
            if(l==r){
                bob++;
                break;
            }
        }
        else {
            l++;
            r--;
            alice++;
            bob++;
 
        }
    }
    cout<<alice<<" "<<bob;
 
}