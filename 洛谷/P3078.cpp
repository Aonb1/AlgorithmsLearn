#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int maxn=2e+5;
int n,arr[maxn];
ll sum=0;
int main() {
    cin>>n;
    for(int i=1;i<=n;i++) {
    cin>>arr[i];
    }
    for(int i=1;i<=n;i++) {
       if(arr[i]-arr[i-1]>0) sum+=arr[i]-arr[i-1];
    }
    cout<<sum;
    return 0;
}
//5
//2 4 1 2 3
//2 2 -3 1 1
//6