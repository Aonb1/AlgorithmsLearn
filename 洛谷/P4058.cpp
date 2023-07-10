#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;
ull n,s,l,h[200001],a[200001];
bool f(ull month){
    ull tsum=0;
    for (int i=0;i<n;i++)
        if (h[i]+a[i]*month>=l) tsum+=h[i]+a[i]*month;
    if(tsum>=s) return true;
    else        return false;
}
int main(){
    cin>>n>>s>>l;
    for(int i=0;i<n;i++) 
    scanf("%ulld",&h[i]);
    for(int i=0;i<n;i++) 
    scanf("%ulld",&a[i]);
    ull l=0,r=1000000000000000001;
    while(l<r){//二分答案
        ull mid=(l+r)>>1;
        if(f(mid))    r=mid;
        else          l=mid+1;
        //cout<<l<<" "<<r<<endl;
    }
    cout<<l;
    return 0;
}
//hi hi hi hi hi .. hn
//hi+=ai
//s
//s/n>=L
//hi==L
/*
  3 74 51
  2 5 2
  2 7 9
ans=7 
  16 54 65
  54>=51
  65>=51
  sum=135
*/