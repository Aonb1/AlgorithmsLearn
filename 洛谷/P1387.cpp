#include<bits/stdc++.h>
using namespace std;
int path[105][105];
int sum[105][105];
int main(){
	int n,m,ans=0;
	cin>>n>>m;
	for(int i=1;i<=n;i++)
		for(int j=1;j<=m;j++)
			  cin>>sum[i][j];
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			if(sum[i][j]==1)
	    path[i][j]=min(min(path[i-1][j],path[i][j-1]),path[i-1][j-1])+1;
		ans=max(path[i][j],ans);
		}
	}
	cout<<ans<<endl;
   return 0;
}
/*
4 4
0 1 1 1
1 1 1 0 
0 1 1 0
1 1 0 1


0 1 1 1
1 1 1 0
0 1 1 0
1 1 0 1
行一维前缀和
  y
0 1 2 3
1 2 3 3 x
0 1 2 2
1 2 2 3
对于x=i,y=j的位置来说
ex.x=1,y=1,l=1;
如果x~x+l与y~y+l的区域都为1的话
满足b[x][y+l]-b[x][y]=y+l-y=l与b[x+l][y+l]-b[x+l][y]=l
b[1][2]-b[1][1]=3-2=1  ==  l
b[2][2]-b[2][1]=2-1=1  ==  l
最后l+=1;
即为正方形
*/
