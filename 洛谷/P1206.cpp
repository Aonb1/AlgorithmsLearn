#include<bits/stdc++.h>
using namespace std;
string f1(int n,int number) {
    //20  16 先转进制 转成string类型
    stack<char> s;
    string str;
    while (number){
        char ch;
        if(number%n>=10)  ch='A'+(number%n-10);
        else              ch=number%n+'0';
        s.push(ch);
        number/=n;
    }
    while (!s.empty()){
        char c=s.top();
        str+=c;
        s.pop();
    }
    return str;
}
bool f2(string str) {
    //判断回文
   if(str.length()==1) return true;
   for(int i=0;i<(str.length()/2);i++) {
     if(str[i]!=str[str.length()-1-i]) return false;
   }
   return true;
}
int main() {
    int n;
    cin>>n;
    for(int i=1;i<=300;i++) {
        if(f2(f1(n,i*i)))
        cout<<f1(n,i)<<" "<<f1(n,i*i)<<endl;
    }
    return 0;
}
