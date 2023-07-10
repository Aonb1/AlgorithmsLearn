#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int maxn=1e+6;
priority_queue<int,vector<int>,greater<int>> s;
ll ans=0,n,val;
int main(){
    cin>>n;
    for(int i=0;i<n;i++) {
        scanf("%lld",&val);
        s.push(val);
    }
    while(s.size()!=1) {
    ll a=s.top();
    s.pop();
    ll b=s.top();
    s.pop();
    ll tmp=a+b;
    ans+=tmp;
    s.push(tmp);
    }
    cout<<ans;
    return 0;
}
