#include<bits/stdc++.h>
using namespace std;
const int maxn=51;
int n,m,ans=INT_MAX;
char a[maxn][maxn]={'0'};
int main() {
     cin>>n>>m;
    for(int i=1;i<=n;i++)//读取图案
    	for(int j=1;j<=m;j++) 
			cin>>a[i][j];
    for(int i=1;i<n-1;i++)//枚举每种可能的涂色次数 o(n^4)
    	for(int j=i+1;j<n;j++){
			int res=0;
    		for(int c=1;c<=i;c++)
    			for(int d=1;d<=m;d++)
					if(a[c][d]!='W') res++; 
    		for(int c=i+1;c<=j;c++)
    			for(int d=1;d<=m;d++) 
					if(a[c][d]!='B') res++; 
    		for(int c=j+1;c<=n;c++)
    			for(int d=1;d<=m;d++) 
					if(a[c][d]!='R') res++; 
			ans=min(ans,res);
		}
    cout<<ans;
    return 0;
}
//对于n行
//aaaa 第一种情况 白
//aaaa           蓝      3*3*3=27 中间27种选蓝色方案     
//aaaa               蓝
//aaaa                   蓝
//aaaa           红  