#include<bits/stdc++.h>
using namespace std;
int main(){
	//1 1 1 1 20
    int n;
    cin>>n;
    vector<int> m(n,0);
	for(int i=0;i<n;i++) 
	cin>>m[i];
    //把枚举值限制在0-83之间   
	int ans=-1;
	for(int i=0;i<=83;i++){
    int sum=0;
	for(int j=0;j<n;++j)
        {
            if(m[j]<i&&i-m[j]>17)
            {
                int c=(i-m[j]-17)*(i-m[j]-17);
                sum+=c;
            }
            if(m[j]>i)
            {
                int c= m[j]-i;
                sum+=c*c;
            }
		}
		if(ans==-1||sum<ans)
		ans=sum;
	}
	cout<<ans;
    return 0;
}