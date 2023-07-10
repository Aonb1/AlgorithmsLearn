#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int maxn=1e+5;
ll n,m,arr[maxn+1]={0};
bool check(ll mid){
    ll tmp=0,res=0;
    for(int i=1;i<=n;i++){
         if(tmp+arr[i]<=mid)
                 tmp+=arr[i];
         else {
                 tmp=arr[i];
                 res++;
        }
    }
    return res>=m;
}
int main() {
    ll l=INT_MIN,r=0;
    cin>>n>>m;
    for(int i=1;i<=n;i++){
      cin>>arr[i];
      r+=arr[i];
      l=max(l,arr[i]);
    }
    while (l<=r){
      ll mid=(l+r)/2;
      if(check(mid)){
         l=mid+1;
      }
      else
         r=mid-1;
    }
    cout<<l;
    return 0;
}
//对于n行
//aaaa 第一种情况 白
//aaaa           蓝      3*3*3=27 中间27种选蓝色方案     
//aaaa               蓝
//aaaa                   蓝
//aaaa           红  