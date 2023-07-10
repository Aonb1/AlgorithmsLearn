#include<bits/stdc++.h>
using namespace std;
const int maxn=1e+6,maxm=2e+3;
int n,m,hs[maxm+1],cnt=0,a,b,val,e=maxn,i;//e记录边界
queue<int> q;
int main(){
	cin>>n>>m;
	for(i=1;i<=n;i++) {
		cin>>val;
		hs[val]++;
		if(hs[val]==1)  cnt++;
		q.push(val);
		if(cnt==m) break;
        }
		while(true){
                int num=q.front();
				hs[num]--;
				q.pop();
				if(hs[num]==0){
				    b=i,a=i-q.size();
                    break;
                 }
        }
	cout<<a<<" "<<b;
	return 0;
}