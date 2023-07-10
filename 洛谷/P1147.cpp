#include<bits/stdc++.h>
using namespace std;
#define maxn 20000001
long long int arr[maxn];
int main() {
	int n;
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
		arr[i]=arr[i-1]+i;//前缀和
	for(int i=1;i<n;i++) 
    {
		int l=i,r=n-1;//1 9999
		while(l<=r) 
        {
			int mid =(l+r)>>1;
			if(arr[mid]-arr[i-1]>=n) r=mid-1;
			else                     l=mid+1;
		}
		if(arr[l]-arr[i-1]==n) printf("%d %d\n",i,l);		
	}
	return 0;
}
