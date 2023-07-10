#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
set<ll> s={1};
ll n,arr[]={2,3,5,7},ans=0;
int main()
{
    cin>>n;
    if(n==0)        ;//处理0
    else {
    for(int i=2;i<n+1;i++) {
        set<ll>::iterator min_val=s.begin();
        for(int i=0;i<4;i++) s.insert(arr[i]*(*min_val));
        s.erase(min_val);
      }
      ans=*s.begin();
    }
    cout<<ans;
    return 0;
}