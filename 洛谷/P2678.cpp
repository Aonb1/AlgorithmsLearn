#include<bits/stdc++.h>
using namespace std;
int l,n,m,a[5000001],ans=0;
bool f(int mid){
    int last=0,cnt=0;
    for(int i=1;i<=n+1;i++){
       if(a[i]-a[last]<mid)
                cnt++;
       else
                last=i;
    }
    return cnt<=m;
}
int main(){
    cin>>l>>n>>m;
    for(int i=1;i<=n;i++)  cin>>a[i];
    int L=0,R=l;
    a[n+1]=l;
    while(L<=R){
        int mid=(L+R)>>1;
        if(f(mid)){
            ans=mid;
            L=mid+1;
        }
        else R=mid-1;
    }
    cout<<ans;
    return 0;
}

//ios::sync_with_stdio(false);//使得cin与scanf读入速度差不多
//priority_queue //优先队列
