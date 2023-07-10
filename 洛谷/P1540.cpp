#include<bits/stdc++.h>
using namespace std;
int m,n,num,vis[100001]={0},cnt=0;
queue<int> q;
int main(){
    cin>>m>>n;
    for(int i=0;i<n;i++){
        cin>>num;
        if(!vis[num]){
            q.push(num);
            cnt++;
            vis[num]=1;
        }
        if(q.size()>m){
           vis[q.front()]=0;
           q.pop();
        }
    }
    cout<<cnt;
    return 0;
}
//2 5 4 
//5 4 1