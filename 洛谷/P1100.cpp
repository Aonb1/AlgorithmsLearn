#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
unsigned int n,a=0,b=0,new_n;
int main(){
    cin>>n;
    a = n << 16;
    b = n >> 16;
    new_n=a+b;