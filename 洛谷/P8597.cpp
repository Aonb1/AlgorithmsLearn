#include<bits/stdc++.h>
using namespace std;
const int maxn=1e+5;
int cnt=0;
int main(){
   string s1,s2;
   getline(cin,s1);
   getline(cin,s2);
    for(int i=0;i<s1.length()-1;i++){
	  if(s1[i]!=s2[i]){
		if(s1[i]=='*')   s1[i]='o';
    else             s1[i]='*';
    if(s1[i+1]=='*') s1[i+1]='o';
    else             s1[i+1]='*';
    cnt++;
	 }
}
   cout<<cnt;
   return 0;
}
/*
**********
o****o****
----------
oo******** 1
o*o******* 2
o**o****** 3
o***o***** 4
o****o**** 5
----------------
*o**o***o***
*o***o**o***

*/