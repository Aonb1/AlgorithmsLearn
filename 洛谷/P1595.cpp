#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll arr[21]={0};
int n;
int main(){
    arr[0]=1;
	cin>>n;
	for(int i=2;i<n+1;i++)
	arr[i]=(i-1)*(arr[i-1]+arr[i-2]);
	cout<<arr[n];
	return 0;
}
// 1 0 0 0 0 0 0 0 0 0 0 0 0 0 0
// 1 0 1 2