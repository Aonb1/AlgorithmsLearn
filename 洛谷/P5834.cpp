#include<bits/stdc++.h>
using namespace std;
int a,arr[9]={14,1,2,4,7,8,11,13,14},c;
int main(){
    cin>>a;
    c=((a-1)/8)*15+arr[a%8];
    cout<<c<<endl;
    return 0;
}