#include<bits/stdc++.h>
using namespace std;
const int maxn=1e+7;
int fa[maxn];
int find(int x){
    if(fa[x]==x)
    return x;
    return fa[x]=find(fa[x]);
}
int main(){
    for(int i=1;i<=maxn;i++)
    fa[i]=i;
    int n,m,c;
    cin>>n>>m>>c;
    for(int i=1;i<=c;i++){
        int a,b,pa,pb;
        cin>>a>>b;
        pa=find(a),pb=find(b);
        fa[pa]=pb;
    }
    int cnt=0;
    for(int i=1;i<=n*m;i++){
        if(fa[i]==i)
         cnt++;
    }
    cout<<cnt;
    return 0;
}