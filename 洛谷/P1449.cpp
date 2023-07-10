#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int maxn=1e+6;
stack<int> s;
char ch;
int f(int a,int b,char c) {
     if(c=='+')      return a+b;
     else if(c=='-') return b-a;
     else if(c=='*') return a*b;
     else  return b/a;
}
int main(){
    int val=0;
    while(true){
        scanf("%c",&ch);
        if(ch=='@') break;
        else if(ch<='9'&&ch>='0') val=val*10+ch-'0';//入栈的数可能是十位数以及以上更大，所以没遇到'.'之前继续这样操作，否则只能读入个位数
        else if(ch=='.')   {
            s.push(val);
            val=0;
        }
        else {
           int a=s.top();//2
           s.pop();
           int b=s.top();//5
           s.pop();
           s.push(f(a,b,ch));
        }
    }
    cout<<s.top();
    return 0;
}
/*
Inputcopy
3.5.2.-*7.+@
Outputcopy
16
*/