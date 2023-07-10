#include<bits/stdc++.h>
using namespace std;
int a[100005],t;
int cur(int x){
	int sum=3;//第0层
	int k=1;
	while(sum<x){
		sum=sum*2+1+k+2;
		a[k]=sum;
		k++;
	}
	return k-1;//它的上一层即为所求
}
char f(int n,int t){
	if(t==0){
		if(n==1) return 'm';
		if(n==2||n==3) return 'o';
	}
	if(n<=a[t-1])     return f(n,t-1);
	if(n>a[t]-a[t-1]) return f(n-(a[t]-a[t-1]),t-1);
	if(n==a[t-1]+1)   return 'm';
	return 'o';
}

int main(){
	int n;
    cin>>n; 
	a[0]=3;
	t=cur(n);
	char ch=f(n,t);
	cout<<ch; 	
	return 0;
} 
