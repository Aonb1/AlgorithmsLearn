#include<bits/stdc++.h>
using namespace std;
int n=0,arr1[]={2,3,5,7},arr2[]={1,3,5,7,9};//第一位数字只有四种可能，后面的有五种可能
vector<long long int> arr3;
bool f(long long int number){
    if(number==0||number==1) return false;
    for(int i=2;i<=sqrt(number);i++){
        if(number%i==0) return false;
    }
    return true;
}
void ff(long long int num,int deep){//知道所有可能的组成情况 递归
	if(deep==1){
		if(f(num))  arr3.push_back(num);
		return ;
	}
	if(f(num)) 
        for(int i=0;i<5;i++)
            ff(num*10+arr2[i],deep-1);//操作一次后,n--
}
int main(){
	cin>>n;
	for(int i=0;i<4;i++)
    ff(arr1[i],n);
    for(int i=0;i<arr3.size();i++){
    cout<<arr3[i];
    if(i!=arr3.size()-1) cout<<endl;
    }
 return 0;
}


