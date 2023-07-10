#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
bool f1(ll number){//复杂度o(sqrt(n))
        for(int i=2;i<=sqrt(number);i++)
            if(number%i==0)
               return false;
    return true;
}
bool f2(ll number){//复杂度 O(1)
    string str=to_string(number);
    int len=str.length();
    if(len==1) return true;
    for(int i=0;i<len/2;i++)
         if(str[i]!=str[len-i-1]) 
             return false;
      return true;
}
int main(){
    ll L,R;
    cin>>L>>R;
    for(ll i=L;i<=R;i++){
        if(i==9989900) break;
        if(f2(i)) 
          if(f1(i))
            cout<<i<<endl;
    }
    return 0;
}