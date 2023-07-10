#include<bits/stdc++.h>
using namespace std;
int cnt1=0,cnt2=0;
bool f1(int year,int month,int day){
	if(month<=0||month>12) return false;
	if(day<=0||day>31)     return false;
	return true;
}
bool f2(int num){
    string str=to_string(num);
    if(str.size()==1) return true;
    for(int i=0;i<str.size()/2;i++)
        if(str[i]!=str[str.size()-1-i]) return false;
    return true; //20211202
}
bool f3(int num){
    string str=to_string(num);
    if(str[0]==str[7]&&str[1]==str[6]&&str[2]==str[5]&&str[3]==str[4]&&str[1]==str[3]&&str[0]==str[2]) return true;
    return false;//ABABBABA
}
int main() {
	int num;
    cin>>num;
    for(long long int i=num+1;i<=98981231;i++)//ABABBABA
    {    //20211202  2021-12-02
        int year=i%100000000/10000,month=i%10000/100,day=i%100;
        if(cnt1==0)
         if(f2(i)&&f1(year,month,day))
         {
            cout<<i<<endl;
            cnt1++;
         }
        if(cnt2==0)
         if(f3(i)&&f1(year,month,day))
         {
            cout<<i<<endl;
            cnt2++;
         }
        if(cnt1==1&&cnt2==1) break;
    }
	return 0;
}
