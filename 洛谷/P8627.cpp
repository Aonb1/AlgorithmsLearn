#include<bits/stdc++.h>
using namespace std;
const int maxn=1e+5;
int n,ans=0;
int main(){
   cin>>n;
   int cnt=0;
   while(n){
    n--,cnt++,ans++;
    if(cnt==3) {
    n+=1;
    cnt=0;
   }
}
   cout<<ans;
   return 0;
}
