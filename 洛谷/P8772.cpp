#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int maxn=2e+5;
int n,arr[maxn];
ll ans=0,tmp=0;
int main() {
    cin>>n;
    for(int i=0;i<n;i++) {
        scanf("%d",&arr[i]);
        tmp+=arr[i];
    }
    for(int i=0;i<n;i++){
    tmp-=arr[i];
    ans+=arr[i]*tmp;
    }    
    cout<<ans;
    return 0;
}