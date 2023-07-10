#include<bits/stdc++.h>
using namespace std;
const int N=20;
bool arr[N];
bool check(int num){
    while(num){
        if(arr[num%10]==0)return 0;
        num/=10;
    }
    return true;
}
int ans=0,n,val;
int main(){
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>val;
        arr[val]=1;
    }
    for(int i=100;i<=1000;i++)
        for(int j=10;j<=100;j++)
            if(i*(j/10)<=1000&&i*(j%10)<=1000&&i*j<=10000)
                if(check(i)&&check(j)&&check(i*(j%10))&&check(i*(j/10))&&check(i*j))
                    ans++;
    cout<<ans<<endl;
    return 0;
}