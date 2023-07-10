#include <bits/stdc++.h>
using namespace std;
int arr[10000],arr_sum[10000],cnt=0,m,n;
bool f(int number){
    if(number==1||number==0) return false;
    for(int i=2;i<=sqrt(number);i++){
        if(number%i==0) return false;
    }
    return true;
}
void dfs(int deep){
    if(deep-1==n){
		int sum=0;
		for(int i=1;i<=n;i++)
			sum+=arr[arr_sum[i]];
		if(f(sum))  cnt++;
	}
    for(int i=arr_sum[deep-1]+1;i<=m;i++){
		arr_sum[deep]=i;
		dfs(deep+1);
		}
}
int main(){
    cin>>m>>n;
    for(int i=1;i<=m;i++)
    cin>>arr[i];
    dfs(1);
    cout<<cnt;
    return 0;
}
//4 3
//3 7 12 19
//四种情况
//3 7 12 = 22
//3 7 19 = 29
//7 12 19 = 37
//12 13 3 =34
