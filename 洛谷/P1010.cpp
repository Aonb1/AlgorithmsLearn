#include<bits/stdc++.h>
using namespace std;
int num,sum_num;
void f(int n){
	int y;
	if(n==0)  return;
	for(int i=0;i<16;i++){
		y=i;
		if(pow(2,i)>n){
			y--;
			break;
		}
	}
	if(y==0)  cout << "2(0)";
	else if(y==1)  cout << "2";
	else if(y>1){
		cout << "2(";
		f(y);
		cout << ")";
	}
	if(n!=pow(2,y)){
		cout << "+";
		f(n-pow(2,y));
	}
}
int main(){
	cin>>num;
	f(num);
	return 0; 
}
