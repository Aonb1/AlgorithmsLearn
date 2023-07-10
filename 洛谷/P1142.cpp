#include<bits/stdc++.h>
using namespace std;
typedef struct{
    int x,y;
}pos;
//枚举直线AX+BY+C
//向量a=(x1,y1)和b=(x2,y2)共线==>x1y2-x2y1==0
//x1y2==x2y1
int main(){
    int n,ans=INT_MIN;
    cin>>n;
    pos r[n];
    for(int i=0;i<n;i++)
    cin>>r[i].x>>r[i].y;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
        int a=r[j].y-r[i].y,b=r[j].x-r[i].x,cnt=0;
        for(int v=0;v<n;v++){
            if(a*(r[v].x-r[i].x)==b*(r[v].y-r[i].y))
            cnt++;
        }   
        ans=max(ans,cnt);
        }
    }
    cout<<ans;
return 0;
}