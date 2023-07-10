#include<bits/stdc++.h>
using namespace std;
int n,l,num,a[100001],b[100001];
int main(){
	cin>>n;
	while(n--)
	{
		stack<int> s;
		cin>>l;
		for(int i=1;i<=l;i++) cin>>a[i];
		for(int i=1;i<=l;i++) cin>>b[i];
		int j=1;
		for(int i=1;i<=l;i++){
			s.push(a[i]);
			while(s.top()==b[j])
			{
				s.pop();
				j++;
				if(s.empty())
				break;
			}
		}
		if(s.size()==0)
		cout<<"Yes"<<endl;
		else 
		cout<<"No"<<endl;
	}
    return 0;
}