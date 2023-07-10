#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
queue<char> q;
stack<char> s;
int j=0,flag=0,d=0;
void f(ll number) {
    while(number){
        q.push(number%10+'0');//999991 //199,999 
        number=number/10;
        d++;
        if(d==3&&number){
            q.push(',');
            d=0;
        }
    }
}
int main(){
    ll a,b,ans;
    cin>>a>>b;
    ans=a+b;//-999,991
    if(ans==0) 
    {
        cout<<"0";
        return 0;
    }
    if(ans<0){
        ans=-ans;
        flag=1;
    }
    if(flag==1) cout<<"-";
    f(ans);
    while(!q.empty()){
        s.push(q.front());
        q.pop();
    }
    while(!s.empty()){
        cout<<s.top();
        s.pop();
    }
    return 0;
}
//-110000 5456413 
//534,641,3
//534,641,3
//5,346,431