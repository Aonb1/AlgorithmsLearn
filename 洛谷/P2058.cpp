//ull才能过 6
#include<bits/stdc++.h>
using namespace std;
const int maxn=1e+5;
typedef unsigned long long ll;
typedef struct{
    ll qt,qnum;
}v;
queue<v> q;//
ll n,vis[maxn+1]={0},tmp,ans=0;
int main(){
	cin>>n;
    while(n--)
    {
        ll t,len;
        cin>>t>>len;
        for(ll i=0;i<len;i++)
        {
            cin>>tmp;
            q.push(v{t,tmp});//入队列
            vis[tmp]=vis[tmp]+1;
            if(vis[tmp]==1) ans++;//新国家
        }
        //处理超出86400
         while (1){
            if(t-q.front().qt<86400) break;//退出，时间是单调递增的
            vis[q.front().qnum]--;
            if(vis[q.front().qnum]==0) ans--;
            q.pop();//处理下一个超时
        }
        cout<<ans<<endl;
    }
    return 0;
}
//1 队列记录 入队时间以及国家号
//2 先进行入队处理，对ans有贡献度的vis数组 vis[tmp]++  该国家当前只有一个人时 ans++ 
//3 如何解决超过当前时间86400 将q出队
